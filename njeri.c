// c structers
#include <stdio.h>
#include <string.h>

struct student {
	int phone;
	;float marks;
	char regNo[20]
	;char email[25]
	;char name[25]
	;int id[9] 
	
;} student1, student2

;int main ()
{
	//struct student1
	strcpy(student1.name, "rosemary");
	strcpy(student1.email, "rosemarynjeriwambugu@gmail.com");
	strcpy(student1.regNo, "CT102/G/21768/24");
	student1.phone = 12345678;
	student1.marks = 97.5;
	
	printf("name %s \n", student1.name);
	printf("email %s \n", student1.email);
	printf("regNo %s \n", student1.regNo);
	printf("marks %f \n", student1.marks);
	printf("phone %d \n", student1.phone);
	return 0;
}