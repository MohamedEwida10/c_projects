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
            printf("%i",y);

        }
        for(y=x-1;y>=1;y--)
        {
            printf("%i",y);

        }


        printf("\n");
    }

    return 0;
}
