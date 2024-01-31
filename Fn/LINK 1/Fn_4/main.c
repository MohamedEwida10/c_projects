#include <stdio.h>
#include <stdlib.h>
void check (unsigned int Num1);


int main()
{
    unsigned int Num1,Num2;
    printf("enter NUM1 :\n");
    scanf("%i",&Num1);

    check(Num1);

    return 0;
}

void check (unsigned int Num1)
{
    if((Num1%2) == 0)
    {
        printf("The Num is even");
    }
    else
    {
        printf("The Num is odd");
    }
}
