#include<stdio.h>

int add(int num1, int num2);
void print(int sum);

int main(){
    int num1 = 10, num2 = 20;
    int sum = add(num1, num2);
    print(sum);
    return 0;
}

int add(int num1, int num2){
    return num1 + num2;
}

void print(int sum){
    printf("Sum is: %d\n", sum);
}