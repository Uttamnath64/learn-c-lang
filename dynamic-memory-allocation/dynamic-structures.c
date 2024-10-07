#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[20];
    int eno;
    float marks;
};

int main(){
    struct Student *ptrStudent;

    ptrStudent = (struct Student *) malloc(sizeof(struct Student));
    if(ptrStudent == NULL){
        printf("Memory not allocated\n");
        return 1;
    }

    // Assing values 
    printf("Enter student name: ");
    scanf("%s", ptrStudent->name);
    printf("Enter student enrollment number: ");
    scanf("%d", &ptrStudent->eno);
    printf("Enter student marks: ");
    scanf("%f", &ptrStudent->marks);

    // Display values
    printf("Student Name: %s\n", ptrStudent->name);
    printf("Student Enrollment Number: %d\n", ptrStudent->eno);
    printf("Student Marks: %f\n", ptrStudent->marks);

    free(ptrStudent);
    return 0;
}