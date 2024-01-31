#include <stdio.h>
#include <stdlib.h>

void maxmin(unsigned int num1,unsigned int num2);
int main()
{
    unsigned int num1;
    unsigned int num2;

    printf("Enter the two numbers \n");
    scanf("%i %i",&num1,&num2);
    maxmin(num1,num2);
    return 0;
}
void maxmin(unsigned int num1,unsigned int num2)
{
 if(num1>num2)
 {
    printf("%i is maxmum and %i is minmum \n",num1,num2);

 }
 else
 {
    printf("%i is maxmum and %i is minmum \n",num2,num1);

 }
}
