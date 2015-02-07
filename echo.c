#include <stdio.h>

// we back 

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    printf("%s%s", argv[i], " ");
  }
  printf("\n");
  return 0;
}
