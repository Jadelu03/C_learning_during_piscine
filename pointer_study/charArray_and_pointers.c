/*
* 1. How to store strings 
    size of array >= no. of characters in string + 1
	"John"  
	

int	main(void)
{
	char	C[20];
	int		len;

	C[0] = 'J';
	C[1] = "O";
	C[2] = 'H';
	C[3] = 'N';
	C[4] = "\0";
	prinf("size in bytes = %d\n", sizeof(C));
	len = strlen(C);
	printf("length = %d\n", len);
}

2. Arrays and pointers are different types that are used in similar mmanner
	char c1[6] = "Hello";
	char *c2; 
	c2 = c1; 
	print c2[1]; 
	c2[0] = 'A'; // "Aello"
	or 
	c2[i] is *(c2 + i)  
	c1[i] or *(c1 + i)

#include <stdio.h>
#include <string.h>

void	print(char *C)
{
	int	i;

	while (*C != '\0')
	{
		printf("%c", *C);
	}
	printf("\n");
}

int	main(void)
{
	char	c[20];

	c[20] = "Hello"; // string get stored in the space for array
	or use
	char *c = "Hello"; // string gets stored as compile time constant 
	print(c);
}

let do soome modifiction on the code, instead of create a char pointer named c and equated against a string literal in a statement 
*/
int	main(void)
{
	char *c = "Hello"; // string gets stored as compile time constant 
	print(c);
}

