//array as function arguments
#include <stdio.h>

int	SumOfElements(int A[])
{
	int	size;

	int i, sum = 0;
	size = sizeof(A) / sizeof(A[0]);
	printf("Main - size of A = %lu, size of A[0] = %lu", sizeof(A),
			sizeof(A[0]));
	for (i = 0; i < size; i++)
	{
		sum += A[i];
	}
	return (sum);
}
int	main(void)
{
	int A[] = {1, 2, 3, 4, 5};
	int total = SumOfElements(A);
	printf("sum of elements = %d\n", total);
	printf("Main - size of A = %d, size of A[0] = %d", sizeof(A), sizeof(A[0]));
}