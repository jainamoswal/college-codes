#include<stdio.h>

int main(){
  // define variable
  char name;
  // Ask for name
  printf("Q. What is your name ?\n");
  printf("A. ");
  scanf("%s", &name);
  // greet
  printf("Hello %s", name);
  return 0;
  }
