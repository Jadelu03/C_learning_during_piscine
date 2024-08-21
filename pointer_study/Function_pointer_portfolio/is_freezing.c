
// creat a function that accepts a function pointer as an argument
#include <stdio.h>
#include <stdbool.h>

bool freeze_C(int temperature)
{
	if (temperature <= 0) return true;
	else return false;
}

bool freeze_F(int temperature)
{
	if (temperature <= 32) return true;
	else return false;
}
void is_freezing(bool(*freeze_check)(int)) 
{
	//the parameter freeze_check is a pointer to a function that accepts an int as argument and returns true or false
	int temperatue = 0;
	printf("Enter Temperature: ");
	scanf("%d", &temperatue);
	if (freeze_check(temperatue))
		printf("It's freezing!\n");
	else
		printf("It's NOT freezing\n");
}

int main()
{
	printf("\nCelsius...\n\n");
	is_freezing(freeze_C);
	is_freezing(freeze_C);

	printf("\nFahrenheit...\n\n");
	is_freezing(freeze_F);
	is_freezing(freeze_F);

	return 0;
}