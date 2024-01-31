#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int reverse_num(unsigned int num );

int main()
{

    int num,reversenum;

    printf("enter the num \n");
    scanf("%i",&num);


    reversenum = reverse_num(num);

    printf("%i",reversenum);

    return 0;
}

unsigned int reverse_num(unsigned int num )
{
    int digit = (int) log10(num);
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return ((num%10* pow(10, digit))+reverse_num(num/10));
    }


}
