#include <stdio.h>
#include <stdbool.h>

typedef struct LinkedList
{
	char name[40];
	int score;
	struct LinkedList* rest;
} LinkedList;

#define PASSING_SCORE 60

int sum(LinkedList* head)
{
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		int selfSum = head->score;
		int restSum = sum(head->rest);
		return selfSum + restSum;
	}
}

bool allPassed(LinkedList* head)
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		if (head->score >= PASSING_SCORE)
		{
			return allPassed(head->rest);
		}	
		else
		{
			return false;
		}
	}
}

void printList(LinkedList* head)
{
	if (head == NULL)
	{

	}
	else
	{
		printf("%s\n", head->name);
		printList(head->rest);
	}
}

void printReverse(LinkedList* head)
{
	if (head == NULL)
	{

	}
	else
	{
		printReverse(head->rest);
		printf("%s\n", head->name);
	}
}

void addPoints(LinkedList* head)
{
	if (head == NULL)
	{

	}
	else
	{
		head->score += 10;
		addPoints(head->rest);
	}
}

int main()
{
	LinkedList paul = {"Paul", 50, NULL};
	LinkedList jai = {"Jai", 69, &paul};
	LinkedList tim = {"Tim", 60, &jai};
	LinkedList kyle = {"Kyle", 58, &tim};

	// printf("%d\n", sum(&kyle));
	// printf("%s\n", allPassed(&kyle)==1?"All passed.":"Not all passed.");
	// printList(&kyle);
	// printReverse(&kyle);
	addPoints(&kyle);
	printf("%s\n", allPassed(&kyle)==1?"All passed.":"Not all passed.");
	return 0;
}