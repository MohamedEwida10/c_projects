#include "my_string.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  char str1[15];
  char str2[15];
  int ret;

  my_strcpy(str1, "abcdef");
  my_strcpy(str2, "ABCDEF");

  ret = my_strncmp(str1, str2, 4);

  if (ret < 0) {
    printf("str1 is less than str2");
  } else if (ret > 0) {
    printf("str2 is less than str1");
  } else {
    printf("str1 is equal to str2");
  }

  return (0);
}
