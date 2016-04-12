#include <stdio.h>

void changeValue(int* x);

int main()
{
	int x = 1;
	changeValue(&x);
	printf("%d\n", x);
}

void changeValue(int* x)
{
	*x = 4;//indirection
}