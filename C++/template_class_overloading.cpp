#include<iostream>
using namespace std;

template<class t1>
void add(t1 a, t1 b){
    cout<<"Addition : "<<a+b;
}

template<class t1>
void add(t1 a, t1 b, t1 c){
    cout<<"Addition : "<<a+b+c;
}

int main(){
    add(2, 4);
    add(3.9, 4.5);
    add(2, 4, 6);
    add(1.2, 3.4, 5.6);
    return 0;
}