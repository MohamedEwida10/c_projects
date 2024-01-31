#include <stdio.h>
#include <stdlib.h>
#include<string.h>

unsigned char *my_strstr(const char *haystack, const char *needle);

int main()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   unsigned char *ret;

   ret = my_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
      return 0;
}
unsigned char *my_strstr(const char *haystack, const char *needle)
{
    unsigned char *TempHaystack=(unsigned char *)haystack;
    unsigned char *TempNeedle=(unsigned char *)needle;
    unsigned char *FirstOccurr=(unsigned char *)haystack;

    int len=0;

    if((NULL ==haystack) || (NULL == needle))
    {
        printf("NULL POINTER ERROR !!! \n");
        return NULL;
    }
    else
    {
        while(*TempHaystack != '\0')
        {
            if(*TempHaystack == *TempNeedle)
            {
                FirstOccurr = TempHaystack;
                while(*TempHaystack == *TempNeedle)
                {

                    len++;
                    TempNeedle++;
                }
            }
            if(len == strlen(needle))
            {
                *(FirstOccurr+1)='\0';
                return FirstOccurr -len +1;
            }

        TempHaystack++;
        }
        return NULL;
    }

}
