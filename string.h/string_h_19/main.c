#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int my_strspn(const char *str1, const char *str2);


int main()
{
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCDE524";

   len = my_strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );

   return(0);
}
unsigned int my_strspn(const char *str1, const char *str2)
{
     int len =0,counter= 0;
     unsigned char *TempStr1=(unsigned char *)str1;
     unsigned char *TempStr2=(unsigned char *)str2;

    if((NULL ==str1) || (NULL == str2))
    {
        printf("NULL POINTER ERROR !!! \n");
    }
    else
    {
        for(counter=0;counter <= strlen(str2);counter++)
        {
            if( (TempStr1[counter]) == (TempStr2[counter]))
            {
                len++;
            }
        }
    }

return len;
}
