// What are function pointers: function pointers can be passed as arguments to function
/**/
#include <stdio.h>
/*
void	A(void)
{
	printf("hello");
}
void	B(void (*ptr())) // function pointer as argument
{
	ptr(); // call-back function that "ptr" points to 
}
int	main()
{
	B(A); // A is callback function
}
*/

// list of integers in array 
// callback function should compare two integers, should return 1 if first element has 
// higher rank, 0 if elements are equal and -1 if second element has higher rank 

int compare(int a, int b)
{
	if ( a > b)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
void	Bubblesort(int *A, int n, (*compare)(int, int))
{
	int i, j, temp, 
	for (i = 0; i < n; i ++)
		for (j = 0; j < n-1; j++)
		{
			if (compare(A[j] , A[j+1]) > 0) // compare A[j] with A[j+1] and swap of needed
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = A[j];
			}
		}
	
}
int main()
{
	int	i;
	int A[] = {3, 2, 1, 4, 6, 5}; // Sort in increasing order => {1, 2, 3, 4, 5, 6}
	Bubblesort(A,6, compare);
	for(i = 0; i < 6; i++)  prinf("%d", A[i]);
}
