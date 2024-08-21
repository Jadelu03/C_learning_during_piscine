
void	function(int x)
{
	printf("x: %d\n", x);
}

int	main(void)
{
	void (*function_pointer)(int); 
	// variable name is function_pointer and it's a pointer so it's a pointer to a function 
	// it has a void return value and has a single int argument
	// here the * is used to declare the function_pointer
	
	function_pointer = &function; 
	// function_pointer saves the memory address of function
	(*function_pointer)(4);
	//use the funtion pointer to call this function
	// here the * is used to dereference the function_pointer
	// access the function and then calling it with argument 4
}