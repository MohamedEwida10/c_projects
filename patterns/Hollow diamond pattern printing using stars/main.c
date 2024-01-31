#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char size;

    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<=size;x++)
    {

        for(y=size;y>=x;y--)
        {
            printf(" ");

        }
        for(y=1;y<=x;y++)
        {
             if(x==1 )
            {
                printf("* ");
            }
            else
            {
                if(y== 1 || y== x)
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
    for(x=1;x<=size;x++)
    {

        for(y=1;y<=x;y++)
        {
            printf(" ");

        }
        for(y=size;y>=x;y--)
        {
            if( x==size )
            {
                printf("* ");
            }
            else
            {
                if(y== x || y== size)
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
