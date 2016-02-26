#include <stdio.h>
#include <stdbool.h>

/**
float -> boolean
Returns true if percentage score is at least the passing score; otherwise, false.
Passing score is a predetermined value.

bool check_if_pass(float score)
{
	return false;
}

bool check_if_pass(float score)
{
	return ... score, PASSING_SCORE;
}

*/

#define PASSING_SCORE 60.00000

bool check_if_pass(float score)
{
	return score >= PASSING_SCORE;
}


int main()
{
	printf("%d == %d\n", check_if_pass(60.0), true);
	printf("%d == %d\n", check_if_pass(59.9), false);
	printf("%d == %d\n", check_if_pass(59.99999), false);
	printf("%d == %d\n", check_if_pass(60.00000000), true);
}