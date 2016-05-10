#include <stdio.h>
#include <stdlib.h>

#define ENLARGE_FACTOR 2
#define SHRINK_FACTOR 0.5
int count;//number of elements
int* ar;//array
int size;//size of the array

int* createArray(int size);
void addElement(int element);
void removeElement(int element);
int* resizeArray(int factor);
void printElements();

int main()
{
	printf("Enter size:");
	scanf("%d", &size);
	ar = createArray(size);
	printElements();
	// ar = resizeArray(ENLARGE_FACTOR);
	// printElements();
	addElement(3);
	addElement(4);
	addElement(5);
	addElement(6);
	printElements();
}

void printElements()
{
	printf("\nElements:");
	for (int i = 0; i < size; ++i)
	{
		printf("%d\t", ar[i]);
	}
	printf("\n");
}
void addElement(int element)
{
	if (count > (size / 2))
	{
		ar = resizeArray(ENLARGE_FACTOR);
	}
	ar[count] = element;
	count++;
}

int* createArray(int size)
{
	count = 0;
	int* p = (int*)calloc(size, sizeof(int));
	return p;
}
int* resizeArray(int factor)
{
	size = size * factor;
	int* p = (int*)realloc(ar, size);
	return p;
}