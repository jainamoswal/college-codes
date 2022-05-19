#include<iostream>
using namespace std;

int sum(int a, int b);
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"\nEnter value of b: ";
    cin>>b;
    cout<<"Sum : "<<sum(a, b);  
    return 0;
}

int sum(int a, int b){
    return a+b;
}