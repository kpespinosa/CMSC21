//Recursion in natural numbers and strings
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

void countdown(int n)
{
	if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", n);
		countdown(n - 1);
	}
}

void countdownEven(int n)
{
	if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		if (n % 2 == 0)
		{
			printf("%d\n", n);
		}
		countdownEven(n -1);
	}
}

/*
n! = n * (n-1)!
end: 1! = 1, 0! = 1
4! = 4 * (4-1)
*/
int factorial(int n)
{
	if ( n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

/**
t = {0, 1, 1, 2, 3, 5, 8...} 
fib(5) = fib(4) + fib(3)
3 = 2 + 1

fib(1) = DNE + fib(-1) = 0//with DNE so special case
fib(2) = fib(1) + DNE = 1//with DNE so special case


fib(n) = fib(n - 1) + fib(n - 2)
fib(3) = fib(2) + fib(1)
fib(3) = 1 + 0 = 1
*/

int fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//n = 4//4+3+2+1
int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum(n - 1);
	}
}


int addSequence(int n, int t0, int t1)
{
	if (n == 0) return t0;
	if (n == 1) return t1;
	return addSequence(n - 1, t1, t0 + t1);
}

int fib2(int n)
{
	return addSequence(n, 0, 1);
}

bool checkPalindrome(char str[], int firstPos, int lastPos)
{
	if (firstPos >= lastPos)
	{
		return true;	
	}
	else
	{
		return str[firstPos] == str[lastPos] && 
		checkPalindrome(str, firstPos + 1, lastPos - 1);
	}
}

//level
bool isPalindrome(char str[])
{
	return checkPalindrome(str, 0, strlen(str) - 1);
}



int main()
{
	// countdown(10);
	// countdownEven(10);
	// printf("%d\n", factorial(4));//4*3*2*1
	// printf("%d\n", factorial(1));//4*3*2*1
	// printf("%d\n", factorial(0));//4*3*2*1

	// printf("%d\n", fib(1));//0
	// printf("%d\n", fib(2));//1
	// printf("%d\n", fib(3));//1
	// printf("%d\n", fib(4));//2

	printf("%d\n", fib2(1));//1
	printf("%d\n", fib2(2));//1
	printf("%d\n", fib2(3));//2
	printf("%d\n", fib2(4));//3
	printf("%d\n", fib2(5));//5

	// printf("%d\n", sum(10));

	// printf("%d\n", isPalindrome("level"));
	// printf("%d\n", isPalindrome("maaaam"));
	// printf("%d\n", isPalindrome("madam"));
	// printf("%d\n", isPalindrome("levelup"));
	return 0;
}