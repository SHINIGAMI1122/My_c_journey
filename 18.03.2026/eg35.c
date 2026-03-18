#include<stdio.h>
int main()
{
    int x[10],y,t;
    y=0;
    while(y<=9)
    {
        printf("enter a number: ");
        scanf("%d",&x[y]);
        y++;
    }
    t=0;
    y=0;
    while(y<=9)
    {
        t=t+x[y];
        y++;
    }
    printf("total is %d\n",t);
    return 0;
}