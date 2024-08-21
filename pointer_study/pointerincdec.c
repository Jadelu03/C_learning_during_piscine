#include <stdio.h>

int	main(void)
{
	int a[] = {3, 2, 67, 0, 56};
	int *p;
	p = a;

	//separate the operations for clarity and to avoid unsequence modification
	int first = *(p++);
	int second = *p++;
	printf("%d %d\n", first, second);
	printf("%d\n", *p);
}