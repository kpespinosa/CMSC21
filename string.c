#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
	int ROWS = 2;
	char names[ROWS][10];

	int i = 0;
	bool keepgoing = false;
	do{
		printf("Name pls: (^ to stop)\n");
		scanf("%s", names[i]);
		keepgoing = strcmp(names[i], "^");
		i++;
	}while(keepgoing && i < ROWS);

	for (int i = 0; i < ROWS; ++i)
	{
		printf("%s\n", names[i]);
	}
}