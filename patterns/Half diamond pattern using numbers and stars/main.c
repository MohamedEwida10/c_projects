#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned int end;
    unsigned char counter=1;

    printf("enter the start \n");
    scanf("%i",&end);

    for(x=1;x<=end;x++)
    {
       for(y=1;y<=x;y++)
       {
          if(y<x)
           {
                printf("%d*",counter++);
           }
           else
           {
                printf("%d",counter++);
           }
       }
       printf("\n");
    }
    counter=counter-end-1;
    for(x=end;x>=1;x--)
    {
       for(y=1;y<=x;y++)
       {
          if(y<x)
           {
                printf("%d*",++counter);
           }
           else
           {
                printf("%d",++counter);
           }
       }
       counter=(counter+1)-x*2;
       printf("\n");
    }
    return 0;
}






