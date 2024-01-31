#ifndef _my_string_h
#define _my_string_h

#include <errno.h>

unsigned char *my_memchr(const void *Array, unsigned char CHAR,
                         unsigned int Length);
int my_memcmp(const void *str1, const void *str2, unsigned int length);
void *my_memcpy(void *Dest, const void *Src, unsigned int length);
void *my_memmove(void *str1, const void *str2, unsigned int length);
void *my_memset(void *str, int c, unsigned int length);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, unsigned int length);
char *my_strchr(const char *str, int c);
int my_strcmp(const char *str1, const char *str2);
int my_strncmp(const char *str1, const char *str2, unsigned int length);
int my_strcoll(const char *str1, const char *str2);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, unsigned int length);
unsigned int my_strcspn(const char *str1, const char *str2);
char *my_strerror(int errnum);
unsigned int my_strlen(const char *str);
char *my_strpbrk(const char *str1, const char *str2);
char *my_strrchr(const char *str, int c);
unsigned int my_strspn(const char *str1, const char *str2);
unsigned char *my_strstr(const char *haystack, const char *needle);
char *my_strtok(char *str, const char *delim);
unsigned int my_strxfrm(char *dest, const char *src, unsigned int length);

#endif
