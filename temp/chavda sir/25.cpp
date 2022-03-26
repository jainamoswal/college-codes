//to access global variable we use scope resolution operator. 

#include<iostream>

using namespace std;

int a = 40;

int main(){
    int a = 50;
    cout<<endl<<a;
    cout<<endl<<::a;
    return 0;
}