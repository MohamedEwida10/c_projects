#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strerror(int errnum);

int main()
{
FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) {
      printf("Error: %s\n", my_strerror(errno));
   }
       return 0;
}
char *my_strerror(int errnum)
{
    return strerror(errnum);
}
