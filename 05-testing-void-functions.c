#include <stdio.h>

void doubleArray(int arr[], int length) {
  for(int i = 0; i < length; i++) {
    arr[i] *= 2;
  }
} 

int main() {
  int arr[3] = {1, 2, 3};

  doubleArray(arr, 3);
  printf("%d %d %d = 2 4 6\n", arr[0], arr[1], arr[2]); 

  return 0;
}
