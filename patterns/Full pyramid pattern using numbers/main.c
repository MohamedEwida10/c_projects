#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char size=0;
    unsigned char y_2=1;
    unsigned char count=0;


    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<=size;x++)
    {
        for(y=1;y<=size-x;y++)
        {
            printf(" ");

        }
         count=x;
       for(y=1;y<=x;y++)
       {
           printf("%d",count);
           count++;
       }

       count-=2;

        for(y=x;y>=2;y--)
       {
           printf("%d",count);
           count--;
       }

        printf("\n");
    }

    return 0;
}
