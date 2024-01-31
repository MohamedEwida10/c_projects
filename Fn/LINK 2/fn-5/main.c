#include <stdio.h>
#include <stdlib.h>

unsigned int IsPrime(unsigned int num);
unsigned int IsArmstrong(unsigned int num);
unsigned int IsPerfect(unsigned int num);


int main()
{
    unsigned int num1;


    printf("Enter the number \n");
    scanf("%i",&num1);
    if(IsPrime(num1))
    {
        printf("the number is prime \n");
    }
    else
    {
        printf("the number is not prime \n");

    }
    if(IsArmstrong(num1))
    {
        printf("the number is Armstrong \n");
    }
    else
    {
        printf("the number is not Armstrong \n");

    }
    if(IsPerfect(num1))
    {
        printf("the number is Perfect \n");
    }
    else
    {
        printf("the number is not Perfect \n");

    }
    return 0;
}
unsigned int IsPrime(unsigned int num)
{
    unsigned int count;
    for(count=2;count<= num/2;count++)
    {
       if (num%count == 0)
        {
            return 0;
        }
    }
    return 1;
}
unsigned int IsArmstrong(unsigned int num)
{
    int n1,sum=0,lb;
    n1=num;

    while(n1 != 0)
    {
        lb=n1%10;
        sum+=lb*lb*lb;
        n1=n1/10;
    }
    return (sum == num);

}
unsigned int IsPerfect(unsigned int num)
{
    int counter;
    int sum=0;


    for(counter=1;counter<num;counter++)
    {
        if(num%counter == 0)
        {
            sum+=counter;
        }
    }

    return (sum == num);
}


