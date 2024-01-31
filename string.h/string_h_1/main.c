#include <stdio.h>
#include <stdlib.h>

unsigned char *my_memchr(const void *Array, unsigned char CHAR,
                         unsigned int Length);

int main() {
  unsigned char *ptr;
  const char array[] = "https://www.tutorialspoint.com";
  unsigned char CHAR;

  printf("Enter the char \n");
  scanf("%c", &CHAR);

  ptr = my_memchr(array, CHAR, 30);

  printf("String after |%c| is - |%s|\n", CHAR, ptr);

  return 0;
}
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
