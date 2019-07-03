#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[50];
	int age;
	struct student* next;
};

struct student* createStudent(char studentName[], int studentAge);
struct student* append(struct student* end, struct student* newStudptr);
void printStudents(struct student* start);
void freeStudents(struct student* start);
/* add any other prototypes as needed */

int main(void) {
	struct student* start, * newStudptr, * end;
	int ageP, ageR, ageM;

	scanf_s("%d %d %d", &ageP, &ageR, &ageM);

	start = createStudent("Petra\0", ageP);
	end = start;
	newStudptr = createStudent("Remi\0", ageR);
	end = append(end, newStudptr);
	newStudptr = createStudent("Mike\0", ageM);
	end = append(end, newStudptr);

	printStudents(start);
	freeStudents(start);

	return 0;
}

struct student* createStudent(char studentName[], int studentAge)
{
	struct student* ptr;
	ptr = (struct student*) malloc(sizeof(struct student));
	for (int i = 0; i < strlen(studentName); i++)
	{
		ptr->name[i] = studentName[i];
	}
	ptr->age = studentAge;
	ptr->next = NULL;
	return ptr;
}

struct student* append(struct student* end, struct student* newStudptr)
{
	end->next = newStudptr;
	return newStudptr;

}

void printStudents(struct student* start)
{
	struct student* ptr = start;
	while (ptr != NULL)
	{
		printf("%s is %d years old.\n", ptr->name, ptr->age);
		ptr = ptr->next;
	}
}

void freeStudents(struct student* start)
{
	struct student* start1 = start;
	struct student* tmp;
	while (start1 != NULL) {
		tmp = start1->next;
		free(start1);
		start1 = tmp;
	}
}