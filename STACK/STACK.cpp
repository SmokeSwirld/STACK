#include "Stack.h"

int main()
{
    STACK sk;

    sk.AndOne(1);
    sk.AndOne(2);
    sk.AndOne(3);
    sk.AndOne(4);
    sk.AndOne(5);
    sk.Print();

    sk.DeleteLast();
    sk.PrintLast();
    sk.Print();
    sk.PrintLast();
    sk.Print();
    sk.PrintLast();
    sk.Print();
    sk.PrintLast();
    sk.Print();
    sk.PrintLast();
    sk.Print();
  
 
}


