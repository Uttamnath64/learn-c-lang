#include<stdio.h>

int main(){
    char gender = 'M';

    switch (gender) {
        case 'F':
            printf("Gender is female");
            break;

        case 'M':
            printf("Gender is male");
            break;

        default:
            printf("Gender is unknown");
            
    }

    return 0;
}