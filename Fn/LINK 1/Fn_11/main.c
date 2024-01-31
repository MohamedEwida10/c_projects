#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Anagram(char str1[],char str2[]);

int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    if(Anagram(str1,str2))
    {
    printf(" %s and %s are Anagram.\n\n",str1,str2);
    }
    else
    {
        printf("the two strings are not anagram\n");
    }
    return 0;
}
int Anagram(char str1[],char str2[])
{
    int str1ChrCtr[256] = {0}, str2ChrCtr[256] = {0};
    int ctr;

    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }

    //count frequency of characters in str1

    for(ctr=0;str1[ctr] != '\0';ctr++)
    {
        str1ChrCtr[str1[ctr]]++;
    }

    //count frequency of characters in str2

    for(ctr=0;str2[ctr] != '\0';ctr++)
    {
        str2ChrCtr[str2[ctr]]++;
    }

    //compare character counts of both strings

    for(ctr=0;ctr <= 255;ctr++)
    {
        if(str1ChrCtr[ctr] != str2ChrCtr[ctr])
        {
            return 0;
        }

    }

    return 1;
}

