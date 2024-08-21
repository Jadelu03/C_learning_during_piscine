#include <stdio.h>

int	factorial(int n)
{
	if (n == 1)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}

int	main(void)
{
	int n = 0;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);

	// iterative solution
	//while (n >= 1)
	//{
	//	fact = n * fact;
	//	n--;
	//}
	printf("fact: %d\n", fact);
	return (0);
}