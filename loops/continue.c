#include<stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){
        if(i == 5){
            printf("continue keyword will skip %d\n", i);
            continue;
        }
        printf("Iteration: %d\n", i);
    }

    return 0;
}