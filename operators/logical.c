#include<stdio.h>

int main(){
    int num1 = 10, num2 = 5;

    printf("(num1 > num2) AND (num1 != num2): %d\n", (num1 > num2) && (num1 != num2));
    printf("(num1 > num2) OR (num1 != num2): %d\n", (num1 > num2) || (num1 != num2));
    printf("NOT (num1 != num2): %d\n", !(num1 != num2));

    return 0;
}