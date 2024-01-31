#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned char start;

    printf("enter the start \n");
    scanf("%d",&start);

    for(x=1;x<=4;x++)
    {
       for(y=1;y<=x;y++)
       {
           printf("%d",start);
       }
       start++;
       printf("\n");
    }

    start-=2;

    for(x=1;x<=3;x++)
    {
       for(y=1;y<5-x;y++)
       {
           printf("%d",start);
       }
       start--;
       printf("\n");
    }
    return 0;
}
