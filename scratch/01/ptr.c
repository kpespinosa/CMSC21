#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("%d", sizeof(int));
    int *A = (int*)malloc(n*sizeof(int));
    int i;
    for(i=0; i< n; i++)
    {
        printf("%d", A[i]);
    }
    for(i = 0; i < n; i++)
    {
        A[i] = i+1;
    }
    for(i=0; i< n; i++)
    {
        printf("%d", A[i]);
    }
    
}