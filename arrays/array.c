#include<stdio.h>

void printArray(int arr[], int size);

int main(){
    int arr[5] = {3, 6, 2, 9,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    arr[4] = 0;
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("index %d value is %d\n", i, arr[i]);
    }
    printf("\n");
}