#include <stdio.h>
#include <stdlib.h>

void *my_memmove(void *str1, const void *str2, unsigned int length);

int main() {
  char dest[] = "oldstring";
  const char src[] = "newstring";

  printf("Before memmove dest = %s, src = %s\n", dest, src);
  my_memmove(dest, src, 9);
  printf("After memmove dest = %s, src = %s\n", dest, src);
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
