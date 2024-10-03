#include <stdio.h>

int main(){
    int a = 5, b = 3; // 5 = 0101, 3 = 0011

    printf("a & b: %d\n", a & b);   // both 1 then 1 else 0
    printf("a | b: %d\n", a | b);   // any one is 1 then 1 else 0
    printf("a ^ b: %d\n", a ^ b);   // both is different then 1 else 0
    printf("~a: %d\n", ~a);         // 1 will 0 and 0 will 1
    printf("a << 1: %d\n", a<<1);   // move left by 1 bit
    printf("a >> 1: %d\n", a>>1);   // move right by 1 bit

    return 0;
}