#include <stdio.h>

int main()
{
	int ROWS = 50;
	int COLS = 50;
	int table[ROWS][COLS];
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			table[i][j] = (i+1) * (j+1);
		}
	}

	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			printf("%d \t", table[i][j]);
		}
		printf("\n");
	}
	return 0;
}