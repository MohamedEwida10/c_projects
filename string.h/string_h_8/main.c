#include <stdio.h>
#include <stdlib.h>

char *my_strchr(const char *str, int c);

int main()
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = my_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
       return 0;
}
char *my_strchr(const char *str, int c)
{
    if( NULL == str)
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        char *TempStr = ( char *)str;

        while(*str != '\0')
        {
            if(*TempStr == c)
            {
                return TempStr;
            }
            TempStr++;
        }
        return NULL;
    }

}
