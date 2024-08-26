//To store the information given by the students in a file. 

#include <stdio.h>

int main () {
FILE *fptr;
fptr = fopen ("Student.txt", "w");   //by the time of writing this, i didnt actually created that file 

char name[100];
int age;
float cgpa;

printf("Enter name : ");
scanf("%s", name);        //dont use %c here
printf("Enter cgpa : ");
scanf("%f", cgpa);
printf("Enter age : ");
scanf("%d", age);

fprintf(fptr, "student name is %s", name );
fprintf(fptr, "CGPA is %f", cgpa);
fprintf(fptr, "student age is %d", age );


fclose(fptr);
return 0;

}