#include<stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){
        if(i == 5){
            printf("break keyword will break loop after %d\n", i);
            break;
        }
        printf("Iteration: %d\n", i);
    }

    return 0;
}