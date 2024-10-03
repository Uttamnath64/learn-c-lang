#include<stdio.h>

int main(){
    int count = 1;
    
    printf("Program Start!\n");

    restart:
    printf("Value of count: %d\n", count);
    count++;

    if(count <= 5){
        goto restart; // Jump back to 'restart:'
    }

    printf("Program End! \n");

    return 0;
}