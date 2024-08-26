#include <stdio.h>
#include <stdlib.h>

int main () {
int *ptr;
ptr = (int*)malloc (5*sizeof(int));

ptr[0] = 21;
ptr[1] = 56;
ptr[2] = 78;
ptr[3] = 12;
ptr[4] = 20;

for (int i=0; i<5; i++){
    printf("%d  \n", ptr[i]);
}

return 0; 
}