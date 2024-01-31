#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char rows;

    printf("enter the rows \n");
    scanf("%d",&rows);

    for(x=1;x<=rows+1;x++)
    {
        for(y=1;y<=x;y++)
        {
            if( y==1)
            {
                printf("*");
            }
            else
            {
                printf("%i",y-1);
            }
        }
        for(y=x-1;y>=1;y--)
        {
            if( y==1)
            {
                printf("*");
            }
            else
            {
                printf("%i",y-1);
            }
        }

        printf("\n");

    }
    for(x=1;x<=rows;x++)
    {
        for(y=1;y<=rows-x+1;y++)
        {
            if( y==1)
            {
                printf("*");
            }
            else
            {
                printf("%i",y-1);
            }
        }
        for(y=rows-x;y>=1;y--)
        {
            if(y==1)
            {
                printf("*");
            }
            else
            {
                printf("%i",y-1);
            }
        }
        printf("\n");
    }
    return 0;
}
