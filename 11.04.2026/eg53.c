#include <stdio.h>
int main()
{
    unsigned int x;//1st is not a sign bit
    x=2147483659;
    printf("%d",x);//%d means first is sign bit rest data bits
    printf("\n");//%u stands for unsigned int
    printf("%u",x);
    return 0;
}