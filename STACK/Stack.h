#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <list>
using namespace std;

class STACK
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
	};

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;
	void DeleteByIndex(int position)
	{
		if (position <= 0)
		{
			DeleteFromHead();
			return;
		}

		if (position >= count)
		{
			position = count - 1;
		}

		int i = 1;
		Node* beforeDel = head;
		while (i++ != position)
		{
			beforeDel = beforeDel->next;
		}
		Node* sacrifice = beforeDel->next;
		beforeDel->next = sacrifice->next;
		delete sacrifice;
		count--;
		if (beforeDel->next == nullptr)
		{
			tail = beforeDel;
		}
	}
	void DeleteFromHead()
	{
		if (count == 0)
		{
			cout << "Empty list!\n";
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
		count--;
		if (head == nullptr)
		{
			tail = nullptr;
		}
	}

public:

	void AndOne(int data)
	{
		Node* newElem = new Node();
		newElem->data = data;
		if (tail == nullptr)
		{
			head = newElem;
		}
		else
		{
			tail->next = newElem;
		}
		tail = newElem;
		count++;
	}
	void DeleteLast()
	{
		if (count == 0) {
			cout << "Empty list!\n";
			return;
		}
		DeleteByIndex(count - 1);
	}

	void Print() const
	{
		if (count == 0)
		{
			cout << "Empty list!\n";
			return;
		}
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
	void PrintLast() 
	{
				
		cout << tail->data << " ";
		DeleteLast();
		
		
	}
};