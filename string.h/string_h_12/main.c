#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char *my_strcpy(char *dest, const char *src);

int main()
{
   char src[40];
   char dest[100];

   memset(dest, '\0', sizeof(dest));
   my_strcpy(src, "This is tutorialspoint.com");
   my_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);    return 0;
}
char *my_strcpy(char *dest, const char *src)
{
    char *TempDest = (char *)dest;
    char *TempSrc = (char *)src;


    if((NULL ==dest) || (NULL == src))
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(*TempSrc != '\0')
        {
            *TempDest++ = *TempSrc++;
        }
    }

    return dest;
}
