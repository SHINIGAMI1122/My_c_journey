#include<stdio.h>
int main()
{
    int x;
    x=1;
    while(x<=15)
    {
        if(x%4!=0)
        {
            printf("%d\n",x);
            x++;
            continue;

        }
        x++;
        printf("cool\n");
    }
    return 0;
}