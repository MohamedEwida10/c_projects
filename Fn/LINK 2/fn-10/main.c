#include <stdio.h>
#include <stdlib.h>

double powering(double num ,int power );
int main()
{
    double num,result ;
    int power ;

    printf("enter the number \n");
    scanf("%lf",&num);

    printf("enter the power \n");
    scanf("%i",&power);

    result= powering(num,power);
    printf("the result = %.4f \n",result);

    return 0;
}
double powering(double num ,int power )
{
    if(power == 0)
    {
        return 1;
    }
    else if(power>0)
    {
        return num *powering(num,power-1);
    }
    else
    {
        return 1/powering(num,-power);
    }

}
