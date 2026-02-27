#include<stdio.h>
int main()
{
    int P,C,M,E,H;
    int Z,T,Per,grace;
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
    //assume that the candidate is not failing any subject so starting point should be 0 aka z=0//
    Z=0;
    if(P<33)
    {
        Z++;
    }
    if(C<33)
    {
        Z++;
    }
    if(M<33)
    {
        Z++;
    }
    if(E<33)
    {
        Z++;
    }
    if(H<33)
    {
        Z++;
    }
    if(Z==0)
    {
        printf("result= pass\n");
        T=P+C+M+E+H;
        Per=T/5;
        printf("Total = %d\n",T);
        printf("Percentage= %d\n",Per);
        if(Per>=60)
        {
            printf("first division\n");
        }
        else
        {
        if(P>=45)
        {
            printf("second division\n");
        }
        else
        {
        if(Per>=33)
        {
            printf("third division\n");
        }
    }
    }
    }
    else
    {
        if(Z==1)
        {
            grace = 0;
            if(P>=30 && P<=32)
            {
                grace=33-P;
                P=33;
                printf("result:pass with the grace of %d in physics\n",grace);
            }
            if(C>=30 && C<=32)
            {
                grace=33-C;
                C=33;
                printf("result:pass with grace of %d in cemistry\n",grace);
            }
            if(M>=30 && M<=32)
            {
                grace=33-M;
                M=33;
                printf("result:pass with grace of %d in maths\n",grace);
            }
            if(E>=30 && E<=32)
            {
                grace=33-E;
                E=33;
                printf("result:pass with grace of %d in english\n",grace);
            }
            if(H>=30 && H<=32)
            {
                grace=33-H;
                H=33;
                printf("result:pass with grace of %d in hindi\n",grace);
            }

        }
        else
        {

            printf("result = fail\n");
        }
    }
    return 0;
}