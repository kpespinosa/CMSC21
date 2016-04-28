#include <stdio.h>


/**
stub:
int count(BinTree* root)
{
	return 0;
}

int count(BinTree* root)
{
	if (base case)
	{
		do something
	}
	else
	{
		do something for current
		recursive call
	}
}
*/

typedef struct BinTree
{
	char name[10];
	int value;
	struct BinTree* left;
	struct BinTree* right;
} BinTree;


int count(BinTree* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		int countSelf = 1;
		int countLeft = count(root->left);
		int countRight = count(root->right);
		return countSelf + countLeft + countRight;
	}
}

int totalSales(BinTree* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return root->value + totalSales(root->left) + totalSales(root->right);
	}
}


//exercise below this
int max(int a, int b)
{
	return a > b? a: b;
}

int maxSales(BinTree* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		int salesLeft = maxSales(root->left);
		int salesRight = maxSales(root->right);
		//return max(max(root->value, salesLeft), salesRight);
		return max(max(salesLeft, salesRight), root->value);
	}
}

int numLevels(BinTree* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + max(numLevels(root->left), numLevels(root->right));
	}
}



int main()
{
	BinTree manolo = {"Manolo", 24, NULL, NULL};
	BinTree aldrin = {"Aldrin", 27, NULL, NULL};
	BinTree ruffa = {"Ruffa", 10, NULL, NULL};
	BinTree winna = {"Winna", 48, NULL};
	BinTree tim = {"Tim", 9, &manolo, &aldrin};
	BinTree aiden = {"Aiden", 40, &ruffa, &winna};
	BinTree kurt = {"Kurt", 3, &tim, &aiden};

	// printf("%d\n", count(&kurt));
	// printf("%d\n", max(2, 3));
	// printf("%d\n", max(3, 4));
	printf("%d\n", maxSales(&kurt));
	// printf("%d\n", numLevels(&kurt));
	// printf("%d\n", totalSales(&kurt));
}