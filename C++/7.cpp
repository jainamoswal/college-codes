#include<iostream>
using namespace std;

int disp(int a);
int main(){
    int val;
    cout<<"Enter value : ";
    cin>>val;
    disp(val);  
    return 0;
}

int disp(int a){
    if (a>0){
        cout<<endl<<"Positive number";
    } else {
        cout<<endl<<"Negative number";
    }
}