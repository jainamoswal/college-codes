#include<iostream>
using namespace std;

int main(){
    // define variable
    int sum, firstNum, secondNum, operation;
    // ask for input
    cout<<"Enter first number : ";
    cin>>firstNum;
    cout<<"Enter second number : ";
    cin>>secondNum;
    cout<<"Enter operation to perform : ";
    cin>>operation;
    // switch case
    switch (operation){
    case 1: // perform addition
        sum=firstNum+secondNum;
        break;
    case 2: // perform substraction
        sum=firstNum-secondNum;
        break;
    case 3: // perform multiplication
        sum=firstNum*secondNum;
        break;
    case 4: // perform division
        sum=firstNum/secondNum;
        break;
    case 5: // perform modulas
        sum=firstNum%secondNum;
        break;
    // default block
    default:
        cout<<"Incorrect input";
        break;
    }
    cout<<"The operation of "<<firstNum<<" and "<<secondNum<<" is "<<sum;
    return 0;
}