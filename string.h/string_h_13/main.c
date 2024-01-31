#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char *my_strncpy(char *dest, const char *src, unsigned int length );

int main()
{
char src[40];
   char dest[12];

   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);    return 0;
}
char *my_strncpy(char *dest, const char *src, unsigned int length )

{
    char *TempDest = (char *)dest;
    char *TempSrc =(char *) src;


    if((NULL ==dest) || (NULL == src))
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(length--)
        {
            *TempDest++ = *TempSrc++;
        }
    }

    return dest;
}
