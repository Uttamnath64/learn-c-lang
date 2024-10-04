#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main(){

    struct Point p = {5, 10};
    struct Point *ptr = &p;

    printf("Ponter p: (x: %d, y: %d)", ptr->x, ptr->y);

    return 0;
}