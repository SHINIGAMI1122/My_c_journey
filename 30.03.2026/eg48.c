/*this example demonstrates how a global variable is declared
and how it is available for all the functions
within a program 
*/
#include <stdio.h>
int x; // x is a global variable
void sam();//return type of sam is void and has zero parameters
int main()
{
    x=10;
    printf("%d\n",x);
    sam();
    printf("%d\n",x);
    return 0;
}
void sam()
{
    x=350;
}