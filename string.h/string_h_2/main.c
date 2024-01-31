#include <stdio.h>
#include <stdlib.h>

int my_memcmp(const void *str1, const void *str2, unsigned int length);

int main() {
  char str1[15] = {"ahmedewida"};

  char str2[15] = {"ahmedewida"};
  int ret;

  ret = my_memcmp(str1, str2, 10);

  if (ret > 0) {
    printf("str2 is less than str1");
  } else if (ret < 0) {
    printf("str1 is less than str2");
  } else {
    printf("str1 is equal to str2");
  }

  return 0;
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
