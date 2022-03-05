#include<stdio.h>
#define date "05-03-2022" // defined a const value using #define preprocessor

int main(){
    const int files=9;// defined const using const keyword.
    printf("As %s, %d files present.", date, files);
    
}
