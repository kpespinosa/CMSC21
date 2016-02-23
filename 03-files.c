#include <stdio.h>

/**
Read a file and after transformation, write it to another file.
*/
int main()
{
	//create input and output file pointers
	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");

	//check if file exists
	if (in != NULL)
	{
		char firstname[20];
		int age;

		//check if the line has two tokens (firstname, age)
		while (fscanf(in, "%s%d", firstname, &age) == 2)
		{
			printf("Happy %dth birthday, %s\n", age, firstname);	
			fprintf(out, "Happy %dth birthday, %s\n", age, firstname);
		}
		fclose(in);
		fclose(out);
	}
	else
	{
		printf("File does not exist.\n");
	}
	return 0;
}