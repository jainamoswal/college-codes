#include<stdio.h>

int main(){
    // define variables
    int number;
    // ask for number
    printf("Enter number : ");
    scanf("%d", &number);
    // check if number is even or odd.
	if (number%2==0){ // number is even
		printf("%d number is even.", number);
	} else { // number is odd
		printf("%d number is odd.", number);
	}
    return 0;
}
