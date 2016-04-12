#include <stdio.h>

typedef struct {
	int code;
	int units;
} Subject;

typedef struct {
	int id;
	Subject* sub;
} Student;

int main()
{
	Subject cmsc11 = {11, 3};
	Subject math17 = {17, 5};

	Student vince = {2015111, &cmsc11};
	Student danielle = {2015121, &math17};

	printf("%d\n", (*(vince.sub)).units);
	printf("%d\n", (*(danielle.sub)).units);

	math17.units = 3;

	printf("%d\n", vince.sub->units);
	printf("%d\n", danielle.sub->units);
}