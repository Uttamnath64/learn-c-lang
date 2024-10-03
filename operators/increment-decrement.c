#include<stdio.h>

int main(){
    int num = 10;

    printf("Post-increment (num++): %d\n", num++);
    printf("After Post-increment (num): %d\n", num);
    printf("After Pre-increment (++num): %d\n", ++num);

    printf("Post-decrement (num--): %d\n", num--);
    printf("After Post-decrement (num): %d\n", num);
    printf("After Pre-decrement (--num): %d\n", --num);

    return 0;
}