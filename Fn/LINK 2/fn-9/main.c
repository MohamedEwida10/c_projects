#include <stdio.h>
#include <stdlib.h>

unsigned int IsPerfect(unsigned int num);

int main()
{
    unsigned int start,end;

    printf("Enter the start \n");
    scanf("%i",&start);
    printf("Enter the end \n");
    scanf("%i",&end);
    for(int i=start;i<=end;i++)
    {
       if(IsPerfect(i))
       {
           printf("%i \t",i);
       }
    }



    return 0;
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


