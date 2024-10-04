#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main(){

    struct Point p[3] = {
        {5, 10},
        {15, 20},
        {25, 30}
    };

    for(int i=0; i<3; i++){
        printf("Ponter p[%d]: values: (x: %d, y: %d)\n", i, p[i].x, p[i].y);
    }

    return 0;
}