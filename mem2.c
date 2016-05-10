//dynamic memory allocation
// void* malloc(size_t size);
//void* calloc(int, size_t);

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	//int* p = malloc(4 * sizeof(int));
	int* p = calloc(4, sizeof(int));
	// printf("%d\n", &p[0]);
	// printf("%d\n", &p[1]);
	// printf("%d\n", &p[2]);
	// printf("%d\n", &p[3]);
	// printf("%d\n", p[0]);
	// printf("%d\n", p[1]);
	// printf("%d\n", p[2]);
	// printf("%d\n", p[3]);

}

