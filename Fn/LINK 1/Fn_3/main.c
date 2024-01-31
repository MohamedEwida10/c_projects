#include <stdio.h>
#include <stdlib.h>
void swap (unsigned int Num1,unsigned int Num2);


int main()
{
    unsigned int Num1,Num2;
    printf("enter NUM1 :\n");
    scanf("%i",&Num1);
    printf("enter NUM2 :\n");
    scanf("%i",&Num2);
    swap(Num1,Num2);

    return 0;
}

void swap (unsigned int Num1,unsigned int Num2)
{
    int SwapTool=Num1;
    Num1=Num2;
    Num2=SwapTool;
    printf(" NUM1 : %i \n",Num1);
    printf(" NUM2 : %i \n",Num2);
}
