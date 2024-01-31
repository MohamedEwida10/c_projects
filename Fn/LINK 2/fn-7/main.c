#include <stdio.h>
#include <stdlib.h>

unsigned int IsStrong(unsigned int num);
unsigned int fact(unsigned int num);

int main()
{
    unsigned int start,end;

    printf("Enter the start \n");
    scanf("%i",&start);
    printf("Enter the end \n");
    scanf("%i",&end);
    for(int i=start;i<=end;i++)
    {
       if(IsStrong(i))
       {
           printf("%i \t",i);
       }
    }



    return 0;
}
unsigned int IsStrong(unsigned int num)
{
    int sum = 0,ld;
    int num1 = num;

    while(num1!= 0)
    {
        ld=num1%10;
        sum+=fact(ld);
        num1=num1/10;
    }

    return (sum == num);

}
unsigned int fact(unsigned int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));

}


