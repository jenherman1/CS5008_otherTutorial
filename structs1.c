#include <stdio.h>

struct student_rec {
    int  id;
    int  age;
    double creditHours;
}; //STRUCT

// -------------------------------------------------------------------

struct student_rec makeStudent(int id, int age, double creditHours){
    struct student_rec tempStudent;

    tempStudent.id = id;
    tempStudent.age = age;
    tempStudent.creditHours = creditHours;

    return tempStudent;
} //function CREATEMYSTRUCT

// -------------------------------------------------------------------
void printStudent (struct student_rec inStruct){
    printf("Student ID is:  %d\n", inStruct.id);
    printf("Student AGE is:  %d\n", inStruct.age);
    printf("Number of Student Credit Hours is:  %f\n", inStruct.creditHours);
} //function PRINTSTUDENT
// -------------------------------------------------------------------

int main() {
    struct student_rec s1 = makeStudent(345, 34, 121.45);
    struct student_rec s2 = makeStudent(1002, 24, 13);

    printStudent(s1);
    printStudent(s2);
}
 //MAIN
