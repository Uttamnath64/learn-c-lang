#include<stdio.h>

int main(){
    int arr[] = {25, 43, 30};
    int *ptr = arr;

    printf("First element of array: %d\n", *ptr);
    ptr++;
    printf("Second element of array: %d\n", *ptr);

    return 0;
}