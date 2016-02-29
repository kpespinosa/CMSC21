#include <stdio.h>
#include <stdbool.h>

bool isTeenager(int age) {
  if (13 <= age && age <= 19) {
    return true;
  } else {
    return false;
  }
}

int main() {
  printf("%d\n", isTeenager(15));
  printf("%d\n", isTeenager(12));
  return 0;
}
