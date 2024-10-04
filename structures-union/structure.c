#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main(){

    struct Point p;
    p.x = 5;
    p.y = 10;

    printf("Ponter p: (x: %d, y: %d)", p.x, p.y);

    return 0;
}