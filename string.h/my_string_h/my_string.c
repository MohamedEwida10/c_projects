#include "my_string.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned char *my_memchr(const void *Array, unsigned char CHAR,
                         unsigned int Length) {

  if (NULL == Array) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;

  } else {
    unsigned char *TempArray = (unsigned char *)Array;

    while (Length--) {
      if (*TempArray == CHAR) {
        return TempArray;
      }
      TempArray++;
    }
    return NULL;
  }
}
int my_memcmp(const void *str1, const void *str2, unsigned int length) {
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    if (TempStr1 == TempStr2) {
      return 0;
    } else {
      while (length) {
        if (*TempStr1 != *TempStr2) {
          if (*TempStr1 > *TempStr2) {
            return 1;
            break;
          } else {
            return -1;
            break;
          }
        } else {
          length--;
          TempStr1++;
          TempStr2++;
        }
      }
    }
  }

  return 0;
}
void *my_memcpy(void *Dest, const void *Src, unsigned int length) {
  unsigned char *TempDest = (unsigned char *)Dest;
  unsigned char *TempSrc = (unsigned char *)Src;

  if ((NULL == Dest) || (NULL == Src)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (length--) {
      *TempDest++ = *TempSrc++;
    }
  }

  return Dest;
}
void *my_memmove(void *str1, const void *str2, unsigned int length) {
  unsigned char *TempDest = (unsigned char *)str1;
  unsigned char *TempSrc = (unsigned char *)str2;
  unsigned int count = 0;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (length--) {
      if ((TempDest > TempSrc) && ((TempDest - TempSrc) < length)) {
        for (count = length - 1; count >= 0; count--) {
          TempDest[count] = TempSrc[count];
        }
      }
      if ((TempSrc > TempDest) && ((TempSrc - TempDest) < length)) {
        for (count = 0; count < length; count++) {
          TempDest[count] = TempSrc[count];
        }
      }

      *TempDest++ = *TempSrc++;
    }
  }

  return str1;
}
void *my_memset(void *str, int c, unsigned int length) {
  char *TempStr = (char *)str;

  if (NULL == str) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (length--) {
      *TempStr++ = c;
    }
  }

  return str;
}
char *my_strcat(char *dest, const char *src) {
  char *TempDest = (char *)dest;
  char *TempSrc = (char *)src;

  if ((NULL == dest) || (NULL == src)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempDest != '\0') {
      TempDest++;
    }
    while (*TempSrc != '\0') {
      *TempDest++ = *TempSrc++;
    }
  }

  return TempDest;
}
char *my_strncat(char *dest, const char *src, unsigned int length) {
  char *TempDest = (char *)dest;
  char *TempSrc = (char *)src;

  if ((NULL == dest) || (NULL == src)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempDest != '\0') {
      TempDest++;
    }
    while (length--) {
      *TempDest++ = *TempSrc++;
    }
    *TempDest = '\0';
  }

  return TempDest;
}
char *my_strchr(const char *str, int c) {
  if (NULL == str) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    char *TempStr = (char *)str;

    while (*str != '\0') {
      if (*TempStr == c) {
        return TempStr;
      }
      TempStr++;
    }
    return NULL;
  }
}
int my_strcmp(const char *str1, const char *str2) {
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    if (TempStr1 == TempStr2) {
      return 0;
    } else {
      while (*TempStr1 != '\0') {
        if (*TempStr1 != *TempStr2) {
          if (*TempStr1 > *TempStr2) {
            return 1;
            break;
          } else {
            return -1;
            break;
          }
        } else {
          TempStr1++;
          TempStr2++;
        }
      }
    }
  }

  return 0;
}
int my_strncmp(const char *str1, const char *str2, unsigned int length) {
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    if (TempStr1 == TempStr2) {
      return 0;
    } else {
      while (length) {
        if (*TempStr1 != *TempStr2) {
          if (*TempStr1 > *TempStr2) {
            return 1;
            break;
          } else {
            return -1;
            break;
          }
        } else {
          length--;
          TempStr1++;
          TempStr2++;
        }
      }
    }
  }

  return 0;
}
int my_strcoll(const char *str1, const char *str2) {
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    if (TempStr1 == TempStr2) {
      return 0;
    } else {
      while (*TempStr1 != '\0') {
        if (*TempStr1 != *TempStr2) {
          if (*TempStr1 > *TempStr2) {
            return 1;
            break;
          } else {
            return -1;
            break;
          }
        } else {
          TempStr1++;
          TempStr2++;
        }
      }
    }
  }

  return 0;
}
char *my_strcpy(char *dest, const char *src) {
  char *TempDest = (char *)dest;
  char *TempSrc = (char *)src;

  if ((NULL == dest) || (NULL == src)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempSrc != '\0') {
      *TempDest++ = *TempSrc++;
    }
  }

  return dest;
}
char *my_strncpy(char *dest, const char *src, unsigned int length)

{
  char *TempDest = (char *)dest;
  char *TempSrc = (char *)src;

  if ((NULL == dest) || (NULL == src)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (length--) {
      *TempDest++ = *TempSrc++;
    }
  }

  return dest;
}
unsigned int my_strcspn(const char *str1, const char *str2) {
  int len;
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    while (*TempStr1 != ('\0')) {
      while (*TempStr2 != ('\0')) {
        if ((*TempStr1) == (*TempStr2)) {
          break;
        }
        TempStr2++;
      }
      if (*TempStr2 != '\0') {
        break;
      }
      len++;
      TempStr2 = (unsigned char *)str2;
      TempStr1++;
    }
  }

  return len;
}
char *my_strerror(int errnum) { return strerror(errnum); }
unsigned int my_strlen(const char *str) {
  unsigned int counter = 0;
  if (NULL == str) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  } else {
    while (*str != '\0') {
      counter++;
      str++;
    }
  }

  return counter;
}
char *my_strpbrk(const char *str1, const char *str2) {

  char *TempStr1 = (char *)str1;
  char *TempStr2 = (char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempStr1 != ('\0')) {
      while (*TempStr2 != ('\0')) {
        if ((*TempStr1) == (*TempStr2)) {
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
char *my_strrchr(const char *str, int c) {

  char *TempStr = (char *)str;
  char *FinalStr = (char *)str;

  if ((NULL == str)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempStr != '\0') {
      if (*TempStr == c) {
        FinalStr = TempStr;
      }

      TempStr++;
    }
    return FinalStr;
  }
}
unsigned int my_strspn(const char *str1, const char *str2) {
  int len = 0, counter = 0;
  unsigned char *TempStr1 = (unsigned char *)str1;
  unsigned char *TempStr2 = (unsigned char *)str2;

  if ((NULL == str1) || (NULL == str2)) {
    printf("NULL POINTER ERROR !!! \n");
  } else {
    for (counter = 0; counter <= strlen(str2); counter++) {
      if ((TempStr1[counter]) == (TempStr2[counter])) {
        len++;
      }
    }
  }

  return len;
}
unsigned char *my_strstr(const char *haystack, const char *needle) {
  unsigned char *TempHaystack = (unsigned char *)haystack;
  unsigned char *TempNeedle = (unsigned char *)needle;
  unsigned char *FirstOccurr = (unsigned char *)haystack;

  int len = 0;

  if ((NULL == haystack) || (NULL == needle)) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
  } else {
    while (*TempHaystack != '\0') {
      if (*TempHaystack == *TempNeedle) {
        FirstOccurr = TempHaystack;
        while (*TempHaystack == *TempNeedle) {

          len++;
          TempNeedle++;
        }
      }
      if (len == strlen(needle)) {
        *(FirstOccurr + 1) = '\0';
        return FirstOccurr - len + 1;
      }

      TempHaystack++;
    }
    return NULL;
  }
}
char *my_strtok(char *dest, const char *source) {
  static char *ADDRES;
  int n = 0;

  if (dest != NULL) {
    ADDRES = dest;
  } else {
    dest = ADDRES;
  }

  for (int i = 0; *(dest + i) != '\000'; i++) {
    if (n == 1) {
      break;
    }
    for (int j = 0; *(source + j) != '\000'; j++) {
      if (*(dest + i) == *(source + j)) {
        ADDRES = dest + i;
        n = 1;
        break;
      }
    }
    ADDRES = dest + i;
  }
  ADDRES = ADDRES + 1;
  *(ADDRES - 1) = '\000';

  if (*(dest) != '\000') {
    return dest;
  } else if (*(ADDRES) == '\000') {
    return NULL;
  } else {
    return my_strtok(NULL, source);
  }
}
unsigned int my_strxfrm(char *dest, const char *src, unsigned int length) {
  unsigned char *TempDest = (unsigned char *)dest;
  unsigned char *TempSrc = (unsigned char *)src;
  int counter = 0;

  if ((NULL == dest) || (NULL == src)) {
    printf("NULL POINTER ERROR !!! \n");
    return 0;
  }

  else {
    while (length--) {
      while (*TempSrc != '\0') {
        *TempDest = *TempSrc;
        counter++;
        TempDest++;
        TempSrc++;
      }
    }
    return counter;
  }
}
