#include<stdio.h>
int main()
{
    int spaces,stars,lines,x,y;
    
    //lines=5;
    scanf("%d",&lines);
    spaces=lines-1;
    
    stars=1;
    x=1;
    while(x<=lines)
    {
        y=1;
        while(y<=spaces)
        {
            printf(" ");
            y++;
        }
        y=1;
        while(y<=stars)
        {
            printf("*");
            y++;
        }
        printf("\n");
        spaces--;
        stars+=2;
        x++;
    }
    return 0;
}
