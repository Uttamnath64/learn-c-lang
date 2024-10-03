#include<stdio.h>

int main(){
    int num = 10;

    num += 5;
    printf("num += 5: %d\n", num);

    num -= 2;
    printf("num -= 2: %d\n", num);

    num *= 2;
    printf("num *= 2: %d\n", num);

    num /= 3;
    printf("num /= 3: %d\n", num);

    num %= 2;
    printf("num %%= 2: %d\n", num);

    num = 10;
    num &= 2;
    printf("num &= 2: %d\n", num);

    num |= 2;
    printf("num |= 2: %d\n", num);

    num ^= 2;
    printf("num ^= 2: %d\n", num);

    num <<= 1;
    printf("num <<= 1: %d\n", num);

    num >>= 1;
    printf("num >>= 1: %d\n", num);

    return 0;
}