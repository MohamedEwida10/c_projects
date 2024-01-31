#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned char counter_1=1;
    unsigned char counter_2=1;

    for(counter_1=1;counter_1<=6;counter_1++)
        {
            for(counter_2=1;counter_2<=counter_1;counter_2++)
                {
                    printf("*");

                }
                 printf("\n");
        }


    return 0;
}
