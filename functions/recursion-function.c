#include<stdio.h>

int factorial(int num);
int main(){
    
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num - 1);
}