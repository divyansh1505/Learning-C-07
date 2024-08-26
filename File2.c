#include <stdio.h>

int main () { 
FILE *fptr;
fptr = fopen("Text.txt", "w");          // This will overwrite the text file and write Mango there. 
                                        // If i used append "a" instead, it wont overwrite it, it
fprintf(fptr,"%c", 'M');                // will just add wahtever i write to whatever was already written 
fprintf(fptr,"%c", 'A');
fprintf(fptr,"%c", 'N');
fprintf(fptr,"%c", 'G');
fprintf(fptr,"%c", 'O');

fclose(fptr);

return 0; 

}