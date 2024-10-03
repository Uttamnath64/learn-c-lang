#include<stdio.h>

int main(){

    int numbers[] = {20, 65, 34, 9, 37, 96, 22};

    int size = sizeof(numbers)/sizeof(numbers[0]);
    int max = numbers[0];

    for(int i=1; i<size; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    printf("The max number in array is %d", max);
}