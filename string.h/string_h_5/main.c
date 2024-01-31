#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void *my_memset(void *str, int c, unsigned int length );


int main()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   my_memset(str,'$',7);
   puts(str);
       return 0;
}
void *my_memset(void *str, int c, unsigned int length )
{
    char *TempStr = (char *)str;

    if(NULL == str)
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(length--)
        {
            *TempStr++ = c ;
        }
    }

    return str;
}

