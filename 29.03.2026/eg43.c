#include<stdio.h>
void lmn(int a,int b)
{
    int r;
    r=a+b;
    printf("total is %d\n",r);
}
int main()
{
    int x,y;
    x=10;
    y=20;
    lmn(x,y);
    printf("cool\n");
    x=100;
    y=200;
    lmn(x,y);
    return 0;
}
