//dynamic memory allocation
// void* malloc(size_t size);
//void* calloc(int, size_t);
//void* realloc(void*, size_t);


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int size;
	printf("Enter the size of array:");
	scanf("%d", &size);
	int* ar = (int*)calloc(size, sizeof(int));

	printf("\n");
	for (int i = 0; i < size; ++i)
	{
		printf("Enter element %d:", i + 1);
		scanf("%d", &ar[i]);
	}

	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", ar[i]);
	}
	printf("Doubling array size..\n");
	size = size * 2;
	int* ar2 = (int*)realloc(ar, size);
	// ar = (int*)calloc(size, sizeof(int));
	// for (int i = size / 2; i < size; ++i)
	// {
	// 	printf("%d\n", ar[i]);
	// }
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", ar2[i]);
	}
	// int* ar3 = (int*)realloc(NULL, size);
	// for (int i = 0; i < size; ++i)
	// {
	// 	printf("%d\n", ar3[i]);
	// }
	ar2[0] = 10;
	printf("%p\n", &ar[0]);
	printf("%p\n", &ar2[0]);
	printf("Printing ar\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", ar[i]);
	}
	printf("Printing ar2\n");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", ar2[i]);
	}
}

