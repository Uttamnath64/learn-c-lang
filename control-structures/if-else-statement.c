#include<stdio.h>

int main(){
    int a = 10, b = 15, c = 20;

    if(a > b){
        printf("a is greater than b\n");
    }else if(b > c){
        printf("b is greater than c\n");
    }else{
        printf("a is not greater than b and b is not greater than c\n");
    }

    return 0;
}