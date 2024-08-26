#include <stdio.h>
#include <stdlib.h>

int main () {
int *ptr;
ptr = (int*)calloc (5, sizeof(int));
int n;
printf("Enter number : ");
scanf("%d", &n);

for (int i = 0; i <n; i++){
    printf("%d  \n", ptr[i]);
}

return 0; 

}