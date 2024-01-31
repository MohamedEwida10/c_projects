#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char rows =1;
    unsigned char coulom =1;
    unsigned char input =0 ;
    unsigned char check =0 ;

    printf("enter the num");
    scanf("%i",&input);

    for (rows=1;rows<=input;rows++)
    {
       for(coulom=input;coulom>=rows;coulom--)
       {
           if ((rows==1) || (rows==input))
           {
               printf("* ");
           }
           else
           {
               if(coulom==input || coulom==rows)
               {
                   printf("* ");
               }
               else
               {
                   printf("  ");
               }

           }
       }
       printf("\n");
    }

    return 0;
}
