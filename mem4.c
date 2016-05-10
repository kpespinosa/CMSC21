//dynamic memory allocation
// void* malloc(size_t size);
//void* calloc(int, size_t);
//void* realloc(void*, size_t);
//void free(void*);

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
	// free(ar);//I'm giving this up.
	ar = NULL;//dangling modifier
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", ar[i]);
	}
	
	
}

