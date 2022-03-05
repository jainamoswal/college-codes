#include<stdio.h>

int main(){
  // declare variable
  int i, times;
  // ask for input
  printf("Enter how many times to print : ");
  scanf("%d", &times);
  for (i = 0; i < times; ++i){ // (initialization; testExpression; updateStatement)
    printf("[%d] Hello!!\n", i);
  }
  return 0;
}
