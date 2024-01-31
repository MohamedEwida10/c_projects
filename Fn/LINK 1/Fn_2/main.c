#include <stdio.h>
#include <stdlib.h>

unsigned int squaring(unsigned int Num1);


int main()
{
    unsigned int result;
    result= squaring(20);
    printf("%i\n",result);
    return 0;
}

unsigned int squaring(unsigned int Num1)
{
    return (Num1*Num1);

}
