#include <stdio.h>
#include <stdlib.h>


int Perfect_numbers(int num);


int main()
{
    int lowerlimit,upperlimit;
    printf("enter the lower limit \n");
    scanf("%d",&lowerlimit);
    printf("enter the upper limit \n");
    scanf("%d",&upperlimit);

    printf("\n");

    for(int counter=lowerlimit;counter<=upperlimit;counter++)
    {
        if(Perfect_numbers(counter))
        {
            printf("%d\t ",counter);

        }
    }


    return 0;
}



int Perfect_numbers(int num)
{
    int sum=0,n1=0,i=1;
    n1=num;
    while(i<n1)
    {
        if(n1%i == 0)
        {
            sum+=i;
        }
        i++;
    }
    return (num == sum);
}

