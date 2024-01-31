#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *my_memcpy(void *Dest, const void *Src, unsigned int length);

int main() {
  const char src[50] = "GOOOOOOAAAAAALLLLL!!!!! ";
  char dest[50] = {"Heloooo!!"};

  printf("Before memcpy dest = %s\n", dest);
  my_memcpy(dest, src, strlen(src) + 1);
  printf("After memcpy dest = %s\n", dest);
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
