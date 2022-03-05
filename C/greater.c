#include<stdio.h>

int main(){
    // define variables
    int numberOne, numberTwo;
    // ask for two inputs
    printf("Enter number one : ");
    scanf("%d", &numberOne);
    printf("Enter number two : ");
    scanf("%d", &numberTwo);
    // check the greater using if-else loop
    if (numberOne>numberTwo){ // runs if numberOne is greater
        printf("%d is greater!!", numberOne);
    } else if (numberTwo>numberOne){ // runs if numberTwo is greater
        printf("%d is greater!!", numberTwo);
    } else { // runs by default, if both conditions return False
        printf("Both are same!!");
    }
    return 0;
}
