#include<stdio.h>
int main()
{
    int e,f;
    e=1;
    f=1;
    while(e<=5)
    {
        f=e*f;
        printf("%d\n",f);
        e++;
    }
    return 0;
}