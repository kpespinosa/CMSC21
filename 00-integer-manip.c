#include <stdio.h>

int append(int num, int digit) {
  return (num * 10) + digit;
}

int main() {
  printf("%d\n", append(1234, 5));
  printf("%d\n", append(1, 2));
  printf("%d\n", append(101011, 0));
  printf("%d\n", append(100, 1));
  return 0;
}
