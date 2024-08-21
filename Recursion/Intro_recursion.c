
#include <stdio.h>

int	calculate(int input, int power)
{
	int result;

	result = 0;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	else
	{
		result = input * calculate(input, power - 1);
		return (result);
	}
}
	int main(void)
	{
		int result;
		int a = 5;
		int b = 3;
		result = calculate(a, b);
		printf("%d\n", result);
		return (0);
	}