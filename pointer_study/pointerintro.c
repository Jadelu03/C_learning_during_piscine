#include <stdio.h>

int	main(void)
{
	int a;
	int *b, *c;

	a = 5;
	printf("a: %d\n", a);
	b = &a;
	c = &a;
	*b = 8;
	printf("a: %d\n", a);
	printf("&a: %p\n", &a);
	printf("value of b: %p\n", b);
	printf("*b: %d\n", *b);
	printf("*c: %d\n", *c);
}