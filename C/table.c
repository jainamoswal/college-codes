#include<stdio.h>

int main() {
    // define variables
    int i, table, until;
    // ask input
    printf("Enter the number : ");
    scanf("%d", &table);
    printf("Enter the number : ");
    scanf("%d", &until);

    // run a loop to multiple numbers with var table
    for(i=1; i <= until; i++){ // used until + 1 to make output more convenient
        printf("\n%d * %d : %d", table, i, table*i);
    }
   return 0;
}
