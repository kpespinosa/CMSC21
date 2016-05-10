//dynamic memory allocation
// void* malloc(size_t size);

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	// void* p = malloc(4);
	// int* p = (int*)malloc(4);
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(bool));
	// int* p = (int*)malloc(sizeof(int));
	// printf("%p\n", p);
	// printf("%d\n", *p);
	// *p = 10;
	// printf("%p\n", p);
	// printf("%d\n", *p);
}

