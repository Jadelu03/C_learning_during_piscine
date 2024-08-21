
// after retunring, nothing needed to be execute
// this is an example of tail recursion 
#include <stdio.h>
//void	print(int a)
//{
//	if (a < 1)
//		return;
//	else 
//		printf("%d\n", a);
//		print(a/2); // the last statement in the function
//}

//int	main(void)
//{
//	print(10);
//	return (0);
//}

// non-tail recursion
void	print(int a)
{
	if (a < 1)
		return;
	else 
		printf("%d\n", a);
		print(a/2); 
		printf("%d\n", a);  // now there is a other statement after the calling function 
}

// void	print(int	a)
{
	if (a < 1)
		return;
	else
		return 1 + print(a/2);
}
int	main(void)
{
	print(10);
	return (0);
}


