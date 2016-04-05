#include <stdio.h>

typedef struct 
{
	char desc[30];
	int units;
} Subject;

typedef struct
{
	char name[30];
	int age;
	Subject favSubj;
} Student;

int main()
{
	
	Subject sub1 = {"CMSC11",3};
	Subject sub2 = {.desc = "Math 17", 
					.units = 3};

	Student s1 = {"Edison", 17, sub2};

	Subject sub3 = sub1;
	sub3.units = 4;

	printf("%d\n", sub3.units);
	printf("%d\n", sub1.units);

	sub1.desc[0] = 'D';
	printf("%s\n", sub1.desc);
	printf("%s\n", sub3.desc);

}