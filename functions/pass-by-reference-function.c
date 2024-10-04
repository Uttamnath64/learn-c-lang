#include <stdio.h>

void addAndSave(int num1, int num2, int *sum);

int main(){
    int num1 = 5, num2 = 10, sum;
    addAndSave(num1, num2, &sum);
    printf("num1 + num2: %d", sum);

    return 0;
}

void addAndSave(int num1, int num2, int *sum){
    *sum = num1 + num2;
}