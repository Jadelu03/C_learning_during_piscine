
// what is argument? -> arguments are input you pass in the command line
#include <stdio.h>

int	main(int argc, char *argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}

	int result;

	result = 1;
	i = 1;
	while (i < argc)
	{
		result = result * argv[i];
		i++;
	}
	return (0);
}