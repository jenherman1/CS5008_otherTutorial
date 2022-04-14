#include <stdio.h>

int sum(int a, int b) {
    return a + b;
} // function SUM

// --------------------------------------
void print_something(int a){
     printf("printing a which is %d\n", a);
} //function PRINT_SOMETHING

// --------------------------------------


void bar(float paycheck);
// -------------------------------------=
int countEven(int theArray[ ], int size) {
      int cnt = 0;
      for (int i=0; i < size; i++){
           if ((theArray[i] % 2) == 0) {
               cnt++;
           } //IF
      } //FOR
      return cnt;
} //function COUNTEVEN

// --------------------------------------
int main(){ 
     int myIntVarA = 56; 
     int myA = 13;
     int myB = 15;
     int myArray[ ] = {1,2,3,4,5,6};
     float myPaycheck = 2000.23; 
     print_something(myIntVarA); 
     bar(myPaycheck);
     printf("the sum of %d and %d is: %d\n ", myA, myB, sum(myA, myB)); 
     printf("\n");
     printf(" There are %d even numbers in myArray.\n", countEven(myArray, 6));
     return 0;
}//MAIN

// --------------------------------------
void bar(float paycheck) {
    int num1 = 10;
    int num2 = 25;
    printf("my paycheck is %7.2f\n", paycheck); 
    printf("The sum of %d and %d is %d.\n", num1, num2, sum(num1,num2));
}//function BAR
