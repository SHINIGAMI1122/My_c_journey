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
    else
    {
        if(x<50)
        {
            printf("less than 50");
        }
        else
        {
            printf("equal to 50");
        }
    }
    return 0;
}