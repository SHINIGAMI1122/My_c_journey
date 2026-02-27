#include<stdio.h>
int main()
{
    int x;
    printf("enter a number = ");
    scanf("%d",&x);
    if(x<59)
    {
        printf("less than 59\n");
    }
    else
    {
        printf("greater than 59\n");
    }
    return 0;
}