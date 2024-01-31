#include <stdio.h>
#include <stdlib.h>

int PrimeOrNot(int num);

int main()
{
    int num,prime;
	printf("\n\n Function : check whether a number is prime number or not :\n");
	printf("---------------------------------------------------------------\n");

    printf(" Input a positive number : ");
    scanf("%d",&num);
    prime = PrimeOrNot(num);
   if(prime==1)
        printf(" The number %d is a prime number.\n",num);
   else
      printf(" The number %d is not a prime number.\n",num);
    return 0;
}

int PrimeOrNot(int num)
{
    int i=2;
    while(i<=num/2)
    {
         if(num%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
