/*

   File:  pointers2.c
   Purpose:  to experiment with pointers; to use the dereferencing operator


*/
#include <stdio.h>


void update(int myVal){
     myVal = 10;
}// function UPDATE


//--------------------------------------------------
int main() {
     int   A = 5;
     int   B = 0;
     int*  p = &A;
     int** q = &p;

     printf("A is %d\n", A);
     printf("The address of A, '&A' is: %p\n", &A);
     printf("p is a pointer to A; p is: %p\n", p);

     printf("The address of p, '&p' is: %p\n", &p);
     printf("q is a pointer to p; q is: %p\n", q);

     // EXPLORE WITH THE DEFERENCING OPERERATOR
     B = *p;
     printf("B has the value...%d\n", B);

    

} // MAIN
