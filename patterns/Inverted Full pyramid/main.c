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
        for (coulom=1;coulom<=input-rows;coulom++)
            {
              printf(" ");

            }
        for (check=1;check<=rows;check++)
            {
                printf("* ");
            }

            printf("\n");
    }

    return 0;
}
