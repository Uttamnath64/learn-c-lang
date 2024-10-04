#include<stdio.h>

int main(){
    int arr[] = {22, 34, 87, 54};
    int *ptr = arr;

    for(int i=0; i<4; i++){
        printf("array index %d value is: %d\n", i, *(ptr + i));
    }

    return 0;
}