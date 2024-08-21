#include <stdio.h>

int	main(void)
{
	char c[] = "learning";
	char c1[] = "Monkey";
	char *p = "Welcome";
	char *q = c1;
	c[3] = 'H';
	q[3] = 'H';
	printf("%s\n", c);
	printf("%s\n", p);
	printf("%s\n", q);
	p[3] = 'H';
	printf("%s\n", p);
	return (0);
}