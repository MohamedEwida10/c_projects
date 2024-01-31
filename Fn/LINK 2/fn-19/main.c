#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int fubb_nth(unsigned int num );

int main()
{

    int num,sum;

    printf("enter the num \n");
    scanf("%i",&num);


    sum = fubb_nth(num);

    printf("%i",sum);

    return 0;
}

unsigned int fubb_nth(unsigned int num )
{

    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else if(num > 1)
    {
        return (fubb_nth(num-1)+fubb_nth(num-2));
    }


}
