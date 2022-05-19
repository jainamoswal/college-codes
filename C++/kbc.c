#include<stdio.h>

int main(){
    int ans, pass=1, bal=0;

    printf("Welcome to KBC!!");
    printf("Now I'll ask 10 question, answer them to win cash prizes!\n\n");

    if(pass==1){
        printf("\n");
        printf("What is 1+1 ?");
        printf("\n");
        printf("1) 1\n");
        printf("2) 2\n");
        printf("3) 3\n");
        printf("4) 4\n");
        printf("Selection ↳ ");
        scanf("%d", &ans);
    }

    if(ans==2){
        printf("Congrats, correct answer!");
        pass = 1;
        bal = bal + 100;  
    } else {
        pass = 0;
    }

    if(pass==1){
        printf("\n");
        printf("What is 2+1 ?");
        printf("\n");
        printf("1) 1\n");
        printf("2) 2\n");
        printf("3) 3\n");
        printf("4) 4\n");
        printf("Selection ↳ ");
        scanf("%d", &ans);
    }

    if(ans==3){
        printf("Congrats, correct answer!");
        pass = 1;
        bal = bal + 400;  
    } else {
        pass = 0;
    }


    if(pass==1){
        printf("\n");
        printf("What is 1+2 ?");
        
        printf("\n");
        printf("1) 1\n");
        printf("2) 2\n");
        printf("3) 3\n");
        printf("4) 4\n");
        printf("Selection ↳ ");
        scanf("%d", &ans);
    }

    if(ans==3){
        printf("Congrats, correct answer!");
        pass = 1;
        bal = bal + 700;  
    } else {
        pass = 0;
    }


    if (pass==1){
        printf("\nYou answered all answers correctly and won %d ₹", bal);
    } else {
        printf("Wrong answer!!\n");
        printf("You won %d ₹", bal);
    }

    return 0;
}