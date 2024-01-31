#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char coef=1;
    unsigned int rows;

    printf("enter the num of rows \n");
    scanf("%d",&rows);

    for(x=0;x<rows;x++)
    {
        for(y=0;y<rows-x;y++)
        {
            printf(" ");

        }
        for(y=0;y<=x;y++)
        {
            if( x==0 || y==0 || y==x )
            {
                coef=1;
            }
            else
            {
                coef=(coef*(x-y+1)/y);
            }
            printf("%d ", coef);

        }

        printf("\n\n");
    }


    return 0;
}
