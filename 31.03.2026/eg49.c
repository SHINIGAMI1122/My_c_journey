#include <stdio.h>
int x;
void sam();
int main()
{
    x=10;// global variable
    printf("%d\n",x);// global variable
    sam();
    printf("%d\n",x);// global variable
    return 0;
}
void sam()
{
    int x;// local variable
    x=203;// local variable
    printf("%d\n",x);// local variable
    {
        extern int x;// memory won't be allocated for this variable because it is already declared as global variable and keyword extern is used
        printf("%d\n",x);// global variable
        x=5050;// global variable
    }
    printf("%d\n",x);// local variable
}