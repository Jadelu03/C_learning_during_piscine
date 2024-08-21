#include <stdio.h>

int	main(void)
{
	int	a;
	int	*p;
	int	**q;
	int	***r;

	a = 10;
	p = &a;
	q = &p;
	r = &q;
	printf("a = %d\n", a);
	printf("a = %d\n", *p);
	printf("a = %d\n", *(*q));
	printf("a = %d\n", ***r);
	printf("address of q = %p %p\n", r, &q);
	printf("address of p = %p %p\n", q, &p);
}
