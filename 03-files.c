#include <stdio.h>
 
int main() {
  FILE *fp = fopen("input.txt", "r");
  FILE *ofp = fopen("output.txt", "w");

  if (fp != NULL && ofp != NULL) {
    int age;
    char name[10];

    while (fscanf(fp, "%s%d", name, &age) == 2) {
      printf("%s is %d years old\n", name, age);
      fprintf(ofp, "%s is %d years old\n", name, age);
    }

    fclose(fp);
    fclose(ofp);

  } else {
    printf("Can't open files!\n");
  }

  return 0;
}
