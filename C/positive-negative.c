#include<stdio.h>

int main(){
    // define variables
    int num;
    // Ask for number
    printf("Enter num : ");
    scanf("%d", &num);
    // if number is less than zero, return positive else negative
    if (num>0){
        printf("Positive number");
    } else {
        printf("Negative number");
    }
    return 0;
}
