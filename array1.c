#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     double myDoubleArray[3]={1.5, 2.3, 4.5};
     char  myCharStr[6] = {'h','e','l','l','o','\0'};
     char  myCharStr2[ ] = "Hello, World!";

     for (int i = 0;  i<3; i++) {
         printf("%f\n", myDoubleArray[i]);
     } //FOR
     printf("%s\n", myCharStr);
     printf("%s\n", myCharStr2);
     return 0;
} //MAIN
