#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned int size=0;

    printf("enter the size \n");
    scanf("%d",&size);

    for(x=1;x<=size;x++)
    {
        for(y=1;y<=size-x+1;y++)
        {
            printf("*");
        }
        for(y=1;y<x;y++)
        {
            printf("  ");
        }
        for(y=1;y<=size-x+1;y++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(x=1;x<=size;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("*");
        }
        for(y=1;y<size-x+1;y++)
        {
            printf("  ");
        }
        for(y=1;y<=x;y++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
