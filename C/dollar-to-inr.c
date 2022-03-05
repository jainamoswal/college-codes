#include<stdio.h>

int main(){
    // define variables
    int dollar;
    // ask for dollars
    printf("Enter dollar : ");
    scanf("%d", &dollar);
    // convert dollar to INR
    printf("INR : %f", dollar*76.43);
    return 0;
}
