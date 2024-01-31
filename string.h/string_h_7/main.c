#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char *my_strncat(char *dest, const char *src, unsigned int length );

int main()
{
char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   my_strncat(dest, src, 15);

   printf("Final destination string : |%s|", dest);

       return 0;
}
char *my_strncat(char *dest, const char *src, unsigned int length )
{
    char *TempDest = (char *)dest;
    char *TempSrc = (char *)src;

    if((NULL == dest) || (NULL == src) )
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(*TempDest != '\0')
        {
            TempDest++;
        }
        while(length--)
        {
            *TempDest++ = *TempSrc++;
        }
        *TempDest = '\0';
    }

    return TempDest;
}






