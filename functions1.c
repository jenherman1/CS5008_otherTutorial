#include <stdio.h>


void print_something(int a){

     printf("printing a which is %d\n", a);
} //function PRINT_SOMETHING


void bar(float paycheck);

int main(){ 
     int myIntVarA = 56; 
     float myPaycheck = 2000.23; 
     print_something(myIntVarA); 
     bar(myPaycheck);
      
     return 0;
}//MAIN

void bar(float paycheck) {
    printf("my paycheck is %7.2f\n", paycheck); 
}//function BAR
