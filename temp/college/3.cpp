#include<iostream>
using namespace std;

int sum();
int main(){

    cout<<"Addition is : "<<sum();  
    return 0;
}

int sum(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"\nEnter value of b: ";
    cin>>b;
    return a+b;
}