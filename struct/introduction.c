#include <stdio.h>
#include <string.h>

// Student
// -name (string)
// - id (string)
// - age (int)
// - grades (int array)

// here i created a group to store a lof of informations
struct		Student
{
	char	name[50];
	char	id[10];
	int		age;
	int		grades[5];
};
//typedef is used in conjunction with struct
// give the name "Student" to this struct
typedef struct
{
	char	name[50];
	char	id[10];
	int		age;
	int		grades[5];
}			Student;

// passing these structs to functions
void		print_students(Student student);

int	main(void)
{
	// here i made a variable whose name us kevina and its datatype is Student
	struct Student kevin;
	// Student kevin
	//now i can use the . to access the members in Student group
	strcpy(kevin.name, "Kevin");
	strcpy(kevin.id, "000112233");
	kevin.age = 40;
	kevin.grades[0] = 1;
	kevin.grades[1] = 2;
	kevin.grades[2] = 3;
	kevin.grades[3] = 4;
	kevin.grades[4] = 5;

	printf("Name: %s\n", kevin.name);
	printf("ID: %s\n", kevin.id);
	printf("Age: %d\n", kevin.age);
	printf("Grades: ");
	for (int i = 0; i < 5; i++)
		printf("%d", kevin.grades[i]);
	printf("\n");
}