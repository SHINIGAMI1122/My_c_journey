#include<stdio.h>
int add(int,int);
int main()
{
    int x,y;
    x=10;
    y=20;
    printf("total is %d\n",add(x,y));
    printf("cool\n");
    x=300;
    y=4000;
    printf("total is %d\n",add(x,y));
    return 0;
}
int add(int p, int q)
{
    int r;
    r=p+q;
    return r;
}