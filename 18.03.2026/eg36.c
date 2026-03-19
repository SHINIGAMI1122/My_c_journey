#include<stdio.h>
int main()
{
    int x[10],y,largest;
    y=1;
    while(y<=9)
    {
        printf("enter a number: \n");
        scanf("%d",&x[y]);
        y++;
    }
    largest=x[0];
    y=1;
    while(y<=9)
    {
        if(x[y]>largest)
        {
            largest=x[y];
            
        }
        y++;

    }
    printf("largest number is %d\n",largest);
    return 0;
}