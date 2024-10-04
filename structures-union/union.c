#include<stdio.h>

union Data{
    int a;
    float b;
    char str[10];
};

int main(){

    union Data data;

    data.a = 20;
    printf("data.a: %d\n", data.a);

    data.b = 200.35;
    printf("data.b: %f\n", data.b);

    return 0;
}