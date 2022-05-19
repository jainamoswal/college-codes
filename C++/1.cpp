#include<iostream>
using namespace std;

int sum();
int main(){
    sum();
    return 0;
}

int sum(){
    int a, b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"\nEnter value of b:";
    cin>>b;
    cout<<"Addition of two numbers : "<<a+b;
    return 0;
}