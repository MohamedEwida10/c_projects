#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned int size;
    unsigned char counter=1;


    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<=size;x++)
    {
       for(y=1;y<=x;y++)
       {
           printf("%d ",counter++);
       }

       printf("\n");
    }




    return 0;
}
