#include<stdio.h>
int main()
{
    int P,C,M,E,H;
    printf("enter marks of physics(0-100) = ");
    scanf("%d",&P);
    if(P>100)
    {
        printf("invalid input\n");
        return 0;
    }
    if(P<0)
    {
        printf("invalid input\n");
        return 0;
    }
    
    printf("enter marks of chemistry(0-100)= ");
    scanf("%d",&C);
    if(C>100)
    {
        printf("invalid input\n");
        return 0;
    }
    if(C<0)
    {
        printf("invalid input\n");
        return 0;
    }
    printf("enter marks of maths(0-100)= ");
    scanf("%d",&M);
    if(M>100)
    {
        printf("invalid input\n");
        return 0;
    }
    if(M<0)
    {
        printf("invalid input\n");
        return 0;
    }
    printf("enter marks of english(0-100)= ");
    scanf("%d",&E);
    if(E>100)
    {
        printf("invalid input\n");
        return 0;
    }
    if(E<0)
    {
        printf("invalid input\n");
        return 0;
    }
    printf("enter marks of hindi(0-100)= ");
    scanf("%d",&H);
    if(H>100)
    {
        printf("invalid input\n");
        return 0;
    }
    if(H<0)
    {
        printf("invalid input\n");
        return 0;
    }
    return 0;
}