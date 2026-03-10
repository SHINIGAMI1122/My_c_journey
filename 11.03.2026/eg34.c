#include<stdio.h>
int main()
{
    int x;
    x=1;
    do
    {
        /* code */
        printf("%d\n",x);
        if(x==3)
        {
            x=17;
            continue;
        }
        x++;
    } while (x<=5);
    
    return 0;
}