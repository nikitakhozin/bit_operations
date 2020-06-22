/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

using namespace std;

int main()
{
    char a = 'A';
    char b = 'B';
    char *ptr1; 
    char **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    *ptr2 = &b;
}
