//  func ()
//{
//	func(); //call itself directly, this function is direct recursion 
//}


// func1()
//{
//	func2();
//}
//func2()
//{
//	func1();   // in func1, it calls func2, in func2 it calls func2 this is a indirect recursion
//}

#include <stdio.h>

int	func1(int n);
int func2(int n);
int main(void)
{
	printf("%d\n", func1(5));
	return 0;
}

int	func1(int n)
{
	if(n <= 1)
		return 1;
	else
		return n*func2(n-1);
}

int func2(int n)
{
	if (n <= 1)
		return 1;
	else 
		return n* func1(n-1);
}

