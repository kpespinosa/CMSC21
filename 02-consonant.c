#include <stdio.h>
#include <stdbool.h>

/**
is_consonant:
character -> boolean
Return true if character is consonant; otherwise, false. 
A character is a consonant 
if it is a letter and it is not a vowel.
bool is_consonant(char c)
{
	return false;
}

bool is_consonant(char c)
{
	return ... c;
}

:is_letter
bool is_letter(char c)
{
	return false;
}
bool is_letter(char c)
{
	return ... c;
}

is_vowel:
bool is_vowel(char c)
{
	return false;
}
bool is_vowel(char c)
{
	return ... c;
}
*/

bool is_vowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool is_letter(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'); 
}


bool is_consonant(char c)
{
	return is_letter(c) && !is_vowel(c);
}

int main()
{
	//check if it is a vowel
	printf("%d == %d\n", is_vowel('a'), true);
	printf("%d == %d\n", is_vowel('h'), false);

	//check if it is a lettere
	printf("%d == %d\n", is_letter('a'), true);
	printf("%d == %d\n", is_letter('#'), false);

	//checks if it is a consonant
	printf("%d == %d\n", is_consonant('a'), false);
	printf("%d == %d\n", is_consonant('c'), true);
	printf("%d == %d\n", is_consonant('Z'),true);
	printf("%d == %d\n", is_consonant('1'), false);

	return false;
}