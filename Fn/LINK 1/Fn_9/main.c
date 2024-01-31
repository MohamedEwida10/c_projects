#include <stdio.h>
#include <stdlib.h>

int Armstrong(int num);
int Perfect_numbers(int num);


int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);

    if(Armstrong(num))
    {
        printf("the number is Armstrong \n");
    }
    else
    {
        printf("the number is not Armstrong \n");
    }
    if(Perfect_numbers(num))
    {
        printf("the number is Perfect_numbers \n");
    }
    else
    {
        printf("the number is not Perfect_numbers \n");
    }


    return 0;
}


int Armstrong(int num)
{
    int sum=0,ld,n1;
    n1=num;
    while(n1!=0)
    {
        ld=n1%10;
        sum+=ld*ld*ld;
        n1=n1/10;
    }
    return (num == sum);
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

