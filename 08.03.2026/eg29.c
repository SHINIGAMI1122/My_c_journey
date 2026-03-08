#include<stdio.h>
int main()
{
    int x,y,z,ep,sp,j;
    printf("enter starting point: ");
    scanf("%d",&sp);
    printf("enter end point: ");
    scanf("%d",&ep);
    j=sp;
    while(j<=ep)
    {
        x=j;
        if(x>1)
        {
            z=0;
            y=2;
             while(y<=x-1)
             {
                if(x%y==0)
                {
                    z=1;
                    break;
                }
                y++;
             }
             if(z==0)
             {
                printf("%d\n",x);
             }
        }
        j++;
    }
    return 0;
}