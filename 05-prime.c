#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
This illustrates that mere number of test cases cannot assure us that 
our code is perfect. This necessitates that we should have some metrics to
check if all possible scenarious have been covered which will be discussed
next. 

number -> boolean
Return true if number is prime, 
otherwise false. 
bool is_prime(int number)
{
	return false;
}

bool is_prime(int number)
{
	return ... number;
}
*/

bool is_prime(int number)
{
	if (number <= 1 || number % 2 == 0)
		return false;
	//try first with < condition then <=.
	for (int i = 3; i <= sqrt(number); i++)
		if (number % i == 0)
			return false;
	return true;
}

int main()
{
	//mere number of test cases may fool us to think we have a good piece of code
	printf("%d == %d\n", is_prime(1), false);
	printf("%d == %d\n", is_prime(2), false);
	printf("%d == %d\n", is_prime(3), true);
	printf("%d == %d\n", is_prime(4), false);
	printf("%d == %d\n", is_prime(5), true);
	printf("%d == %d\n", is_prime(20), false);
	printf("%d == %d\n", is_prime(21), false);
	printf("%d == %d\n", is_prime(22), false);
	printf("%d == %d\n", is_prime(23), true);
	printf("%d == %d\n", is_prime(24), false);
	
	//but adding this one test case below brings us back to earth
	printf("%d == %d\n", is_prime(25), false); 
}