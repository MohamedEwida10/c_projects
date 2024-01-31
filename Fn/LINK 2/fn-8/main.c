#include <stdio.h>
#include <stdlib.h>

unsigned int IsArmstrong(unsigned int num);

int main()
{
    unsigned int start,end;

    printf("Enter the start \n");
    scanf("%i",&start);
    printf("Enter the end \n");
    scanf("%i",&end);
    for(int i=start;i<=end;i++)
    {
       if(IsArmstrong(i))
       {
           printf("%i \t",i);
       }
    }



    return 0;
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
