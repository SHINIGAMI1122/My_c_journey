#include<stdio.h>
int main()
{
    int x[10],y,largest,smallest,sl;
    y=0;
    while(y<=9)
    {
        printf("enter a number");
        scanf("%d",&x[y]);
        y++;
    }
    largest=x[0];
    smallest=x[0];
    y=1;
    while(y<=9)
    {
        if(x[y]>largest)
        {
            largest=x[y];
        }
        if(x[y]<smallest)
        {
            smallest=x[y];
        }
        y++;
    }
    
    if(largest==smallest)
    {
        printf("all numbers are same ");

    }
    else
    {
        sl=smallest;
        y=0;
        
        while(y<=9)
        {
            if(x[y]>sl && x[y]!=largest)
            {
                sl=x[y];
            }
            y++;
        }
        
    }
            printf("second largest number is %d\n",sl);
            printf("largest number is %d\n",largest);
            

    return 0;
}