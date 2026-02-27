#include<stdio.h>
int main()\
{
    int e,f,g;
    e=0;
    f=1;
    while(e<=34)
    {
        printf("%d\n",e);
        g=e+f;
        e=f;
        f=g;
    }
    return 0;
}