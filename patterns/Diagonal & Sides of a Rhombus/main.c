#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char counter=0;
    unsigned char size;

    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<=size;x+=2)
    {


        for(y=size;y>=x;y--)
        {
            printf(" ");

        }
        for(y=1;y<=x;y++)
        {
            if(x==size)
            {
                printf(" *");

            }
            else
            {
                if(y==1 || y==x ||y==x-counter )
                {
                    printf(" *");

                }
                else
                {
                    printf("  ");

                }
            }


        }
        counter++;

        printf("\n");
    }
    counter=(size+1)/2;
    for(x=1;x<=size;x+=2)
    {
        if(x==1)
        {
            continue;
        }
        for(y=1;y<=x;y++)
        {
            printf(" ");

        }
        for(y=size;y>=x;y--)
        {
             if(y==size || y==x ||y==size-counter+2 )
            {
                printf(" *");
            }
            else
            {
                printf("  ");

            }

        }
        counter--;
        printf("\n");
    }










    return 0;
}
