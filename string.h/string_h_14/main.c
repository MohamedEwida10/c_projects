#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int my_strcspn(const char *str1, const char *str2);

int main()
{
   unsigned int len;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = my_strcspn(str1, str2);

   printf("First matched character is at %d\n", len+1);
       return 0;
}
unsigned int my_strcspn(const char *str1, const char *str2)
{
 int len;
 unsigned char *TempStr1=(unsigned char *)str1;
 unsigned char *TempStr2=(unsigned char *)str2;

    if((NULL ==str1) || (NULL == str2))
    {
        printf("NULL POINTER ERROR !!! \n");
        return 0;
    }
    else
    {
        while(*TempStr1 != ('\0'))
        {
            while(*TempStr2 != ('\0'))
            {
                if((*TempStr1) == (*TempStr2))
                {
                    break;
                }
                TempStr2++;
            }
            if(*TempStr2 != '\0' )
            {
                break;
            }
           len++;
           TempStr2 = (unsigned char *)str2;
           TempStr1++;
        }
    }

return len;
}
