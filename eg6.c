#include<stdio.h>
int main()
{
    int x;
    printf("enter a number = ");
    scanf("%d",&x);
    if(x>50)
    {
        printf("greater than 50");
    }
    if(x<50)
    {
        printf("smaller than 50");
    }
    if(x==50)
    {
        printf("equal to 50");
    }
    return 0;
}