#include <stdio.h>
#include <stdbool.h>
/*
int -> boolean
Return true if an integer is prime, 
otherwise false.
bool is_prime(int n)
{
	return false;
}
bool is_prime(int n)
{
	bool result;
	for (int i = start; i < stop; stepsize++)
	{
		... i, n
	}	
	return result;
}
*/
bool is_prime(int n)
{
	bool result = true;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)	
		{
			result = false;
			break;
		}
	}	
	return result;
}

int main()
{
	printf("%d == %d\n", is_prime(2), 1);
}

/**
char[] -> int
Return the count of 'a' character 
given a char[].
int count_a(char a[])
{
	return 0;
}

int count_a(char a[])
{
	int result;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		... a[i];
	}
	return result;
}
*/
// int count_a(char a[])
// {
// 	int result = 0;
// 	for (int i = 0; a[i] != '\0'; ++i)
// 	{
// 		if (a[i] == 'a')
// 		{
// 			result++;
// 		}
// 	}
// 	return result;
// }


// int main()
// {
// 	char a[] = "hi";
// 	printf("%d == %d\n",count_a(a), 0);

// 	char b[] = "array";
// 	printf("%d == %d\n",count_a(b), 2);

// 	return 0;
// }






/*
int[], int -> int
Return the sum of the elements 
given an integer array and its length.
int sum_array(int a[], int length)
{
	return 0;
}

int sum_array(int a[], int length)
{
	int result;
	for (int i = 0; i < length; ++i)
	{
		... a[i]
	}
	return result;
}

*/
// int sum_array(int a[], int length)
// {
// 	int result = 0;
// 	for (int i = 0; i < length; ++i)
// 	{
// 		result = result + a[i];
// 	}
// 	return result;
// }


// int main()
// {
// 	int a[] = {1,2,3,4,5};
// 	printf("%d==%d\n", sum_array(a,5), 15);

// 	int b[] = {};
// 	printf("%d==%d\n", sum_array(b,0), 0);	
// 	return 0;
// }