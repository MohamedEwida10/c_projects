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
        for(y=1;y<=x;y++)
        {
            if(x==1 || x==size || x== 2  )
            {
                printf("%i ",y);
            }
            else
            {
                if( y==1 || y==x)
                {
                     printf("%i ",y);
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
