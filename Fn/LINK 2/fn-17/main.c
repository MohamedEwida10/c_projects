#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int SumDigit(unsigned int num );

int main()
{

    int num,sum;

    printf("enter the num \n");
    scanf("%i",&num);


    sum = SumDigit(num);

    printf("%i",sum);

    return 0;
}

unsigned int SumDigit(unsigned int num )
{

    if(num == 0)
    {
        return 0;
    }
    else
    {
        return (num%10+SumDigit(num/10));
    }


}
