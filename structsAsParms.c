/***************************************************************************
     structsAsParms.c
     This program demonstrates the passing of structs as parameters
        to C functions.

     We often send the struct as a pointer because of its considerable
        memory usage.  (i.e., they are big).
***************************************************************************/

#include <stdio.h>

// -----------------------------------------------------------

typedef struct studentRec {
    int id;
    int age;
    double gpa;
}student_t; 

// -----------------------------------------------------------
  
void printStruct (struct studentRec* tempStudent){
    printf("Student's ID:   %d\n", tempStudent->id);
    printf("Student's age:  %d\n", tempStudent->age);
    printf("Student's gpa:  %5.2f\n", tempStudent->gpa);

}//function PRINTSTRUCT

// -----------------------------------------------------------
student_t makeStudent(int s_id, int s_age, float s_gpa){
      student_t localStud;
      localStud.id = s_id;
      localStud.age = s_age;
      localStud.gpa = s_gpa;
      return localStud;
   
} //function MAKESTUDENT

// -----------------------------------------------------------
void updateStudent (student_t* inStud, int s_id, int s_age, float s_gpa){
       inStud->id = s_id;
       inStud->age = s_age;
       inStud->gpa = s_gpa;
       printStruct(inStud);
} //function UPDATESTUDENT



// -----------------------------------------------------------

int main(){
    student_t s1 = makeStudent(12345, 21, 3.5);
    student_t s2 = makeStudent(24680, 22, 3.3);
    student_t s3 = makeStudent(14253, 20, 4.0);
    printStruct(&s1);
    printStruct(&s2);
    printStruct(&s3);
    updateStudent(&s1, 98765, 22, 3.75);
    updateStudent(&s2, 18642, 23, 3.1);
    updateStudent(&s3, 13243, 20, 4.0);
}//MAIN
