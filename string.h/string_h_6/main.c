#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char *my_strcat(char *dest, const char *src);

int main()
{
    char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   my_strcat(dest, src);

   printf("Final destination string : |%s|\n", dest);


    return 0;
}
char *my_strcat(char *dest, const char *src)
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
        while(*TempSrc != '\0')
        {
            *TempDest++ = *TempSrc++;
        }
    }

    return TempDest;
}

