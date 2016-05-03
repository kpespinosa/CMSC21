#include <stdio.h>

void mystery(int n)
{
	if (n < 1)
	{
		printf("Finished\n");
	}
	else
	{
		printf("%d\n", n);
		mystery(n - 1);
		printf("%d\n", n);
	}
}
int main()
{
	mystery(3);
	return 0;
}