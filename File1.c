#include <stdio.h>

int main (){
FILE *fptr;
fptr = fopen("Text.txt", "r");

char ch;  
fscanf(fptr, "%c", &ch);
printf(" %c", ch);
fscanf(fptr, "%c", &ch);
printf(" %c", ch);
fscanf(fptr, "%c", &ch);
printf(" %c", ch);
fscanf(fptr, "%c", &ch);
printf("%c", ch);


fclose(fptr);
return 0; 
}