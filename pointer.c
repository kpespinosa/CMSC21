#include <stdio.h>

void addOne(int* a)
{
	*a = *a + 1;
	printf("in:%d\n", *a);
}

void maxOf2(int* x, int* y, int* z)
{
	if (*x > *y)
	{
		*z = *x;
	}
	else
	{
		*z = *y;
	}
}

int main()
{
	int a = 2;
	int b = 3;
	int* c; //stores the max of 2
	
	maxOf2(&a, &b, c);
	printf("%d\n", c);//should print 3
	// int a = 1;
	// addOne(&a);
	// printf("out:%d\n", a);

	// int a = 2;
	// int b = a;
	// printf("a value:%d\n", a);
	// printf("a address: %p\n", &a);

	// printf("b value:%d\n", b);
	// printf("b address:%p\n", &b);

	// int* c = &a;
	// printf("c value: %p\n", c);
	// printf("c address:%p\n", &c);

	// *c = *c + 1;
	// printf("%d\n", a);
	// printf("%d\n", *c);
}