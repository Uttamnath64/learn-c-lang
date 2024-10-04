#include<stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

    printf("Value of a: %d\n", **ptr2);

    return 0;
}