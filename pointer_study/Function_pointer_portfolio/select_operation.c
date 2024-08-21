#include <stdio.h>
int	subtract(int x, int y)
{
	return (x - y);
}
int	multiply(int x, int y)
{
	return (x * y);
}

int	divide(int x, int y)
{
	return (x / y);
}
int (*select_operation())(int, int)
{
	// the function is called select_opeartion
	// what is going to return: a pointer to a function that accepts two int arguments and returns int value
	int option = 0;
	printf("Select An opeartion\n");
	printf("1) Subtract\n");
	printf("2) Multiply\n");
	printf("3) Divide\n");
	printf("Enter: ");
	scanf("%d", &option);

	if (option == 1) return subtract;
	else if (option == 2) return multiply;
	else if (option == 3) return divide;
	else return NULL;
}

int	main(void)
{
	/*
	int (*array[])(int, int) = {subtract, multiply, divide};
	// declare an array of pointer to function that accepts 2 int arguments and return an int return (int product = (*array[1])
	int product = (*array[1])(3,15);
	// access the multiply function with 3, 15

	printf("product: %d\n", product);
	return (0);
	*/
	int (*operation) (int, int) = select_operation();
	// declare a variable called operation is going to be a pointer to a function 
	// that accepts two int value as arguments and returns an int value
	// assign the result of calling select_operation to operation

	printf("answer: %d\n", operation(20, 5));
	// call the operation function with 20, 5
	return 0;
}