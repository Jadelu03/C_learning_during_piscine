#include <stdio.h>
#include <string.h>

void	print(char *C)
{
	int	i;

	i = 0;
	while (*C != '\0')
	{
		printf("%c", *C);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	//char c[6] = "Hello";

	// string get stored in the space for array

	//char *c = "Hello"; // string gets stored as compile time constant
	//print(c);

	int arr[] = {1, 2, 3, 4};
	char str[] = "hello";
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i++;
	}
	return (0);
}