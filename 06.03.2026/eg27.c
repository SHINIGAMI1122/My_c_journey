#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x>1)
    {
        z=0;
        y=2;
        while(y<=x-1)
        {
            if(x%y==0)
            {
                z=1;

            }
            y++;
        }

    }
    else
    {
        z=1;
    }
    if(z==0)
    {
    printf("%d is a prime number\n",x);
    }
    else
    {
        printf("%d is not a prime number\n",x);
    }
    return 0;
}