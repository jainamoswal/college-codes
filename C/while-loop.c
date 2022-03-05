#include <stdio.h>

int main() {
    // define variables
    int times;
    // ask input
    printf("How many times to print : ");
    scanf("%d", &times);

    // There are two methods for while loop.

    /*
    1. 
    do { // this is executed at least once
        printf("\nHello world!!");
        times--;
    }
    while(times != 0); 
    */

   // 2.
    while (times != 0){ // runs while expression doesn't returns False
        printf("\nHello world!!");
        times--; // decrement
   }
    return 0;
}
