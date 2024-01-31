#include <stdio.h>
#include <stdlib.h>
unsigned int PrintNumbers(unsigned int start , unsigned int end);

int main()
{
    int sum=0;
    int start,end;

    printf("enter the start \n");
    scanf("%i",&start);
    printf("enter the end \n");
    scanf("%i",&end);

    sum = PrintNumbers(start,end);

    printf("%i",sum);

    return 0;
}
unsigned int PrintNumbers(unsigned int start , unsigned int end)
{


    if(end == start)
    {
      return start;
    }
    else
    {

        return start+
        (PrintNumbers(start+1,end));
    }
}
