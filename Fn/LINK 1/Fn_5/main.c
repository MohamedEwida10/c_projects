#include <stdio.h>
#include <stdlib.h>

unsigned int fact(unsigned int num1);

int main()
{

    unsigned int sum;

    sum = fact(1)+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("the sum = %i",sum);

    return 0;
}
unsigned int fact(unsigned int num1)
{
    unsigned int factorial=1;
    unsigned int n=0;

    while(n<=num1-1)
    {
        factorial=factorial+factorial*n;
        n++;
    }
   return factorial;
}
