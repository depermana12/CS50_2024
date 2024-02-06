#include <stdio.h>
#include <string.h>

struct student {
    char name [15];
    float gpa;
};

// student1, student2, student3;


int main (){

struct student student1 = {"SpongeBob", 3.0};
struct student student2 = {"Patrick", 2.0};
struct student student3 = {"Sandy", 2.9};

// student1 = (struct student){"SpongeBob", 3.0};
// student2 = (struct student){"Patrick", 2.0};
// student3 = (struct student){"Sandy", 2.9};

struct student students [] = {student1, student2, student3};

int size = sizeof(students)/sizeof(students[0]);
for (int i = 0 ; i < size ; i ++){
    printf("%-15s\t", students[i].name);
    printf("%.2f\n", students[i].gpa);
}



}
