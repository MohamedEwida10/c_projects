#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char rows =1;
    unsigned char coulom_1 =1;
    unsigned char coulom_2 =1;
    unsigned char input =0 ;

    printf("enter the num");
    scanf("%i",&input);

    for (rows=1;rows<=input;rows++)
    {
        for(coulom_1=1;coulom_1<=input-rows;coulom_1++)
        {
            printf(" ");
        }
        for(coulom_2=1;coulom_2<=rows;coulom_2++)
        {
            if(rows==1 || rows==input)
            {
                printf("* ");
            }
            else
            {
                if(coulom_2== 1 || coulom_2== rows)
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
