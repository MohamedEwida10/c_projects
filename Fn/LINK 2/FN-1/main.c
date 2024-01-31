#include <stdio.h>
#include <stdlib.h>
unsigned int CudeNum(unsigned int num);
int main()
{
unsigned int num ,result;
printf("enter the num \n");
scanf("%i",&num);
result = CudeNum(num);
printf("the result =%i \n",result);


    return 0;
}
unsigned int CudeNum(unsigned int num)
{
    return num*num*num;
}
