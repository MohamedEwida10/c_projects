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
        for(y=1;y<=size-x;y++)
        {
            printf("%i",y);
        }
        printf("\n");
    }

    return 0;
}
