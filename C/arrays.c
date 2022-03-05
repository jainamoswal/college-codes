#include<stdio.h>

int main(){
	// define variables
	int a[50], i, limit, sum=0;
	// ask for limits
	printf("Enter the limit : ");
	scanf("%d", &limit);
	// if limit is same as our array's index then pass
	if (limit<=50){
		for(i=0; i<limit; i++){
			printf("\nEnter the value for a[%d] : ", i);
			scanf("%d", &a[i]);
			sum += a[i]; // add all arrays. #todo use different for loop to add all arrays
		}
	} else { // input is more than array's index value so break
		printf("Provided limit is more than array's index!!");
		return 0;
	}
	// display the output
    printf("Sum of a[%d] is >> %d", limit, sum); 
	return 0;
}
