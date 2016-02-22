#include <stdio.h>

int main() {
  printf("Hello world!\n");
  printf("%d|%5d|%-5d|%5.3d|\n", 5, 567, 582, 5);
  printf("%f|%f|%f|%.9f|\n", 1.1, 1.1, 1.1, 1.1);

  char name[10];
  printf("Please input a name: ");
  scanf("%s", name);
  printf("Name you entered: %s\n", name);
  


  int i = 0;
  printf("Please input a number: ");
  scanf("%d", &i);
  printf("You entered: %d\n", i);

  float j = 0;
  printf("Please input a float number: ");
  scanf("%f", &j);
  printf("You entered: %f\n", j);


  printf("Please input an integer followed by a float separated by a space: ");
  scanf("%d%f", &i, &j);
  printf("Integer you entered: %d\n", i);
  printf("Float you entered: %f\n", j);

  return 0;
}
