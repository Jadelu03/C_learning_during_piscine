#include <stdio.h>

int	main(void)
{
	int a = 10, b = 5;

	int *p, *q;
	p = &a;
	q = &b;
	//q = p;
	//*q = *p; // => b = a
	//*p = *q; //=> a = b;
	printf("a = %d %d\n", a, *p);
	printf("b = %d %d\n", b, *q);
}