#include <stdio.h>
#include <stdbool.h>
/**
int -> boolean
Return true if the number if prime.
bool is_prime(int number)
{
	return false;
}

bool is_prime(int number)
{
	bool result;
	for (int i = start; i < stop; ++i)
	{
		... i
	}
	return result;
}

*/
bool is_prime(int number)
{
	bool result = true;
	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)//factor found
		{
			result = false;
			break;
		}
	}
	return result;
}


/**
int -> int
Return the number of primes from
2 to n inclusive.
int count_primes(int n)
{
	return 0;
}
int count_primes(int n)
{
	int result;
	for (int i = start; i < stop; ++i)
	{
		... i
	}
	return result;
}
*/

int count_primes(int n)
{
	int count = 0;
	for (int i = 2; i <= n; ++i)
	{
		if (is_prime(i))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	//test is_prime
	printf("%d == %d\n", is_prime(7), 1);


	//test count_primes
	printf("%d == %d\n", count_primes(7), 4);
}