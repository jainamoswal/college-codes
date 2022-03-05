#include<stdio.h>

int main(){
	// define variables
    int eng, hin, math, total;
	// ask for inputs
    printf("Enter marks for English : ");
    scanf("%d", &eng);
    printf("Enter marks for Hindi : ");
    scanf("%d", &hin);
    printf("Enter marks for Maths : ");
    scanf("%d", &math);
	// add them all
    total=eng+hin+math;
	// display total marks
    printf("Total marks : %d \n", total);
	// Print grade as per total marks
    if (total>=90){ // runs if marks ≥ 90
        printf("Grade 'A'");
    } else if(total>=80){ // runs if marks ≥ 80
        printf("Grade 'B'");
    } else if(total>=70){ // runs if marks ≥ 70
        printf("Grade 'C'");
    } else { // else runs this block
        printf("FAIL!!");
    }
	return 0;
}
