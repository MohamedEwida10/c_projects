#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned int size;
    unsigned char counter=0;


    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<size+1;x+=2)
    {
        printf(" ");
        for(y=1;y<=x;y++)
        {
              if(y==x || x==size+2)
                {
                    printf("*");
                }
              else
                {
                    printf(" ");
                }
        }
        for(y=1;y<=size-x+9;y++)
        {
            printf(" ");
        }
        for(y=1;y<=size-x+1;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
              if(y==1)
                {
                    printf("*");
                }
              else
                {
                    printf(" ");
                }
        }

        printf("\n");
    }

    for(y=1;y<=x;y++)
    {
        printf("*");
    }
    for(y=1;y<=size-x+10;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
    {
        printf("*");
    }

    printf("\n");


    for(x=1;x<size+1;x+=2)
    {
        printf(" ");
        for(y=1;y<=size-x+1;y++)
        {
            if(y==size-x+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
        }
        for(y=1;y<=x+8;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
              if(y==1)
                {
                    printf("*");
                }
              else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }











    return 0;
}
