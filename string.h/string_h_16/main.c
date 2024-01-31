#include <stdio.h>
#include <stdlib.h>
#include<string.h>

unsigned int my_strlen(const char *str);

int main()
{
 char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = my_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
       return 0;
}
unsigned int my_strlen(const char *str)
{
    unsigned int counter =0;
    if(NULL == str)
    {
        printf("NULL POINTER ERROR !!! \n");
         return 0;
    }
    else
    {
        while(*str != '\0')
        {
            counter++;
            str++;
        }
    }

   return counter;
}

