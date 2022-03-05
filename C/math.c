#include<stdio.h>

int main(){
  // define variabes
  int firstNum, secondNum;
  // Get inputs 
  printf("Enter first number ↠ ");
  scanf("%d", &firstNum);
  printf("Enter second number ↠ ");
  scanf("%d", &secondNum);
  // do mathematical operations here 
  // Addition
  printf("\nAddition : %d", firstNum+secondNum);
  // Substraction
  printf("\nSubstraction : %d", firstNum-secondNum);
  // Multiplication 
  printf("\nMultiplication : %d", firstNum*secondNum);
  // Division 
  printf("\nDivision : %d", firstNum/secondNum);
  return 0;
}
