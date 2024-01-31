#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char end;

    printf("enter the start \n");
    scanf("%d",&end);

    for(x=1;x<=end;x++)
    {
       for(y=1;y<=x;y++)
       {
           if(y==x)
           {
                printf("%d",x);

           }
           else
           {
                printf("%d*",x);

           }
       }

       printf("\n");
    }
    for(x=1;x<=end;x++)
    {
       for(y=1;y<=end-x+1;y++)
       {
           if(y==end-x+1)
           {
                printf("%d",end-x+1);

           }
           else
           {
                printf("%d*",end-x+1);

           }

       }

       printf("\n");
    }




    return 0;
}
