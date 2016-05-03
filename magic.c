#include <stdio.h>

void recursive_magic(int a, int b);

int main()
{
	recursive_magic(1,3);
}

void recursive_magic(int a, int b)
{
	if (a == b)
	{
		printf("finished.\n");
	}
	else
	{
		printf("%d\n", a);
		recursive_magic(a + 1, b);
		printf("%d\n", a);
	}
}