#include<iostream>
using namespace std;

int main(){
    // define variables
    int num;
    // Ask for number
    cout<<endl<<"Enter num : ";
    cin>>num;
    // if number is less than zero, return positive else negative
    if (num>0){
        cout<<endl<<"Positive number";
    } else {
        cout<<endl<<"Negative number";
    }
    return 0;
}
