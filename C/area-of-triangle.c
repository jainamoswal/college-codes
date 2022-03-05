#include<stdio.h>

int main(){
    // define variable
    int h, b;
    // Ask for inputs
    printf("Enter height : ");
    scanf("%d", &h);
    printf("Enter base : ");
    scanf("%d", &b);
    // Apply math formula and print the Area
    printf("Area : %0.2f", h*b*0.50); // product is a float so use %f and print only two zeros
    return 0;
}
