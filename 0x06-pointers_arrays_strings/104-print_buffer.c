#include <stdio.h>
#include "main.h"
#include <ctype.h>

void print_buffer(char *b, int size) {
	int i, j;
  if (size <= 0) {
    printf("\n");
    return;
  }

  for (i = 0; i < size; i++) {
    if (i % 10 == 0) {
      printf("%08x: ", i);
    }
    printf("%02x ", b[i]);
    if (i == 9 || i == size - 1) {
      for (j = i - (i % 10); j <= i; j++) {
        putchar(isprint(b[j]) ? b[j] : '.');
      }
      putchar('\n');
    }
  }
}

