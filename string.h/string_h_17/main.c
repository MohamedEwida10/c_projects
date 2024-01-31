#include <stdio.h>
#include <stdlib.h>

char *my_strpbrk(const char *str1, const char *str2);

int main()
{
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "554";
   char *ret;

   ret = my_strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }    return 0;
}
char *my_strpbrk(const char *str1, const char *str2)
{

 char *TempStr1=(char *)str1;
 char *TempStr2=(char *)str2;

    if((NULL ==str1) || (NULL == str2))
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(*TempStr1 != ('\0'))
        {
            while(*TempStr2 != ('\0'))
            {
                if((*TempStr1) == (*TempStr2))
                {
                    return TempStr2;
                }
                TempStr2++;
            }
           TempStr2 = (char *)str2;
           TempStr1++;
        }
    }

return NULL;
}
