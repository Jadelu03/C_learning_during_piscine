#include <stdio.h>

int	main(void)
{
	int a[5] = {1, 4, 3, 6, -9};
	int *p = &a[0];
	int *q = &a[0];

	printf("value is %d\n", *p);
	printf("address of element is %p\n", p);
	p = p + 2;
	*p = 42;
	printf("value is %d\n", *p);
	printf("value is %d\n", a[2]);
	printf("address of element is %p\n", p);
}