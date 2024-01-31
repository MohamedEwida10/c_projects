#include <stdio.h>
#include <stdlib.h>

unsigned int my_strxfrm(char *dest, const char *src, unsigned int length);

int main()
{
   char dest[20];
   char src[20];
   int len;

   my_strxfrm(src, "Tutorials Point",20);
   len = my_strxfrm(dest, src, 20);

   printf("Length of string |%s| is: |%d|", dest, len);
       return 0;
}

unsigned int my_strxfrm(char *dest, const char *src, unsigned int length)
{
    unsigned char *TempDest = (unsigned char *)dest;
    unsigned char *TempSrc = (unsigned char *)src;
    int counter =0;

    if( (NULL == dest)  ||  (NULL==src) )
    {
        printf("NULL POINTER ERROR !!! \n") ;
        return 0;
    }

    else
    {
        while(length--)
        {
            while(*TempSrc != '\0')
            {
                *TempDest = *TempSrc;
                 counter++;
                 TempDest++;
                 TempSrc++;
            }
        }
    return counter;
    }
}
