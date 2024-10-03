#include<stdio.h>

int main(){
    int a = 10;

    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));

    return 0;
}