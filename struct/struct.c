#include <stdio.h>


typedef struct  
{
	int length;
	int width;
}rectangle;

typedef struct 
{
	int x;
	int y;
}position;

typedef struct 
{
	char owner[30];
	rectangle rectangle;
	position position;
}buildingPlan;

int main(void)
{
	rectangle myRectangle = {5, 10};

	printf("Length: %d. Width: %d\n", myRectangle.length, myRectangle.width);
	buildingPlan myHouse = {"Jade Lu", {5, 10}, {32, 48}};

	printf("The house at %d %d (size %d %d) is owned by %s\n", 
			myHouse.position.x,
			myHouse.position.y, 
			myHouse.rectangle.length,
			myHouse.rectangle.width,
			myHouse.owner
	);
	

	// array of struct
	int size;
	position path[] = {{0, 1}, {1, 2}, {3, 4}};

	size = 0;
	for (int i = 0; i < size ; i++)
	{
		printf("%d %d\n", path[i].x, path[i].y);
	}

	// create a pointer to strcut
	buildingPlan * structPointer = &myHouse;
	printf("Position x: %d\n", structPointer->position.x);

	return 0;
}