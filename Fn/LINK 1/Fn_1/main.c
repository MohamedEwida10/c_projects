#include <stdio.h>
#include <stdlib.h>

unsigned int summing(unsigned int Num2,unsigned int Num1);


int main()
{
    unsigned int result;
    result=summing(2,5);
    printf("%i\n",result);
    return 0;
}

unsigned int summing(unsigned int Num2,unsigned int Num1)
{
    return (Num1+Num2);

}
