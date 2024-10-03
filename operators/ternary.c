#include<stdio.h>

int main(){
    int num1 = 5, num2 = 10;
    int max = (num1 > num2) ? num1 : num2;

    printf("Max number: %d\n", max);
    
    return 0;
}