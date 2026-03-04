#include<stdio.h>
int main()
{
    int choice,x,y,z;
    do
    {
        printf("1.add\n");
        printf("2.sub\n");
        printf("3.exit\n");
        printf("enter your choice: \n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("enter a number: \n");
            scanf("%d",&x);
            printf("enter another number: \n");
            scanf("%d",&y);
            z=x+y;
            printf("%d + %d is %d\n",x,y,z);
        }
        if(choice==2)
        {
            printf("enter a number: \n");
            scanf("%d",&x);
            printf("enter another number: \n");
            scanf("%d",&y);
            z=x-y;
            printf("%d - %d is %d\n",x,y,z);
        }
        if(choice<1 || choice>3)
        {
          printf("invalid input");
          return 0;
        }

        /* code */
    } while (choice!=3);
    
    return 0;
}