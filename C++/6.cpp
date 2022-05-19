#include<iostream>
using namespace std;

int power(int a, int b);
int main(){
    int a,b;
    cout<<"Enter value : ";
    cin>>a;
    cout<<"\nEnter product : ";
    cin>>b;
    cout<<"Power result : "<<power(a, b);  
    return 0;
}

int power(int a, int b){
    int sum, p;
    for (p = 0; b > p; p++){
        sum = sum * a;
    }
    return sum;
}