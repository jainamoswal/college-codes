#include<stdio.h>

void main(){
    char conv[3];
    int um;
    printf("Enter what convention you want to transfer : ");
    scanf("%c", &conv);
    printf("Enter amout : ");
    scanf("%d", &um);
    if(conv=="KM" || conv=="Km" || conv=="kM" || conv=="km"){
        printf("%d kms are %d meters.", um, um*1000);
    } else {
        printf("%d mtrs are %d kms.", um, um/1000);
    }
}