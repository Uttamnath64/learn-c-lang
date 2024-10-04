#include<stdio.h>

struct Point{
    int top;
    int bottom;
};

struct Ractengle {
    struct Point left;
    struct Point right;
};

int main(){
    
    struct Ractengle ract = {
        {2,10},
        {10,2}
    };

    printf("Ractengle Left: (top: %d, bottom: %d)\n", ract.left.top, ract.left.bottom);
    printf("Ractengle Rigth: (top: %d, bottom: %d)\n", ract.right.top, ract.right.bottom);

    return 0;
}