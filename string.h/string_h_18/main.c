#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strrchr(const char *str, int c);

int main()
{
   int len;
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = my_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
       return 0;
}
char *my_strrchr(const char *str, int c)
{

     char *TempStr = (char *)str;
     char *FinalStr = (char *)str;

    if((NULL == str))
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(*TempStr != '\0')
        {
            if(*TempStr == c)
            {
               FinalStr = TempStr ;
            }

            TempStr++;
        }
        return FinalStr;
    }
}
