#include <stdio.h>

int main(){
    int i = 1;

    do{
        printf("Iteration: %d\n", i);
        i++;
    }while(i <= 10);
    
    return 0;
}