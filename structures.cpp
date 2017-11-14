#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
 
 
 typedef struct {
 	
 	char name[20];
	 int age;
	 float salary;
 } person;
 
 
 int main() {
 	
 person emp1, emp2;
 strcpy(emp1.name,"Viktor");
 emp1.age = 32;
 emp1.salary = 1007.13;
 
 strcpy(emp1.name,"Dominika");
 emp1.age = 30;
 emp1.salary = 805.55;	
 	
 printf("Name: %s, age: %d, salary: %1.2f", emp1.name, emp1.age, emp1.salary);
 
 
 person employees[20];
 printf("\nEnter name: ");
 scanf("%s", &employees[0].name);
 printf("\nEnter age: ");
 scanf("%d", &employees[0].age);
 printf("\nEnter salary: ");
 scanf("%f", &employees[0].salary);
 
 int i;
 int j;
 for(i=1;i<20;i++) {
 	for(j=0;j<6;j++) 
 		employees[i].name[j] = rand()%26+'A';
 	employees[i].name[6] = '\0';
 	employees[i].age=rand()%33+18;
 	employees[i].salary = rand()%1000+500;
	 
 	
 }
 
 for(i=0;i<20;i++) {
 	printf("\nName: %s, age: %d, salary: %1.2f", employees[i].name, employees[i].age, employees[i].salary);
 }
 
 float total= 0;
 for(i=0;i<20;i++) {
 	 total += employees[i].salary;
 }
 
 float avg = total/20;
 printf("\nAvarage salary is: %1.2f", avg);
 
 printf("\nAll employees between 20-30 years old with salary more than 1300:\n");
 for(i=0;i<20;i++) {
 	if(employees[i].age>19 && employees[i].age<30) {
 		if(employees[i].salary > 1300) {
 			printf("%s, ", employees[i].name);
		 }
	 }
 }
 
 
 

}
 
