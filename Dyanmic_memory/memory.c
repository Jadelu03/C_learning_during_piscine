#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	//size --> what do we put?
	//void* --> how can we get a stronger type?
	//printf("%lu\n", sizeof(int) * 10);
	int *array = malloc(sizeof(int) * 10);

	if (array == NULL)
	{
		printf("Memory allocation failed.\n");
		return (0);
	}
	for (int i = 0; i < 10; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < 10; i++)
		printf("%i ", array[i]);
	printf("\n");

	free(array);

	return (0);
}