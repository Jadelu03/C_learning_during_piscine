//Function pointers in C/C++
// syntax: int (*Func) (int, int); //declaring a function pointer
#include <stdio.h>

int	Add(int a, int b)
{
	return (a + b);
}

int	main(void)
{
	int c;
	// create a pointer point to thsis function
	// pointer to function that should take
	// (int, int) as arggument/parameter and return int
	int (*p)(int, int);
	p = &Add;
	// assign the address of Add in IF write p = Add is the same (function name will return us pointer)
	c = (*p)(2, 3);
	// de-referencing and executing the function c = p(2,3); is the same
	printf("%d", c);
}