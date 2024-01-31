#include <stdio.h>
#include <stdlib.h>
void PrintNumbers(unsigned int start , unsigned int end);

int main()
{
    int ErrorState=0;
    int start,end;

    printf("enter the start \n");
    scanf("%i",&start);
    printf("enter the end \n");
    scanf("%i",&end);

    PrintNumbers(start,end);

    return 0;
}
void PrintNumbers(unsigned int start , unsigned int end)
{
    if(end < start)
    {
      return start;
    }
    else
    {
        printf("%i \t \n",start);

        return (PrintNumbers(start+2,end));
    }
}
