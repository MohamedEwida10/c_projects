#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strtok(char *str, const char *delim);

int main()
{
char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return 0;
}
char *my_strtok(char *dest, const char *source )
{
    static  char *ADDRES ;
    int n = 0;

    if(dest != NULL)
    {
        ADDRES = dest;
    }
    else
    {
        dest = ADDRES;
    }

    for(int i = 0; *(dest +i) != '\000'; i++)
    {
        if(n == 1)
        {
            break;
        }
        for(int j = 0; *(source + j) != '\000'; j++)
        {
            if(*(dest + i) == *(source + j))
            {
                ADDRES = dest + i;
                n = 1;
                break;
            }
        }
        ADDRES = dest + i;
    }
    ADDRES = ADDRES + 1;
     *(ADDRES - 1) = '\000';



    if(*(dest) != '\000')
    {
        return dest;
    }
    else if(*(ADDRES) == '\000')
    {
        return NULL;
    }
    else
    {
        return my_strtok(NULL,source);
    }


}



