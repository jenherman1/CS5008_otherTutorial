/*  
    passByReference.c

    This code demonstrates how pass-by-reference parameters work.
    The formal parameter actually IS the variable used in the call, so any
      changes made to the parameter in the function body, persist after
      the return.
*/

#include <stdio.h>


//---------------------------------------------

void update(int*  inVal){
     *inVal = 56;
}//function UPDATE

//---------------------------------------------

int main(){
    int A = 3;
    printf("Before function update, A is %d\n", A);
    update(&A);
    printf("After function update, A is %d\n", A);
} //MAIN
