#include<iostream>
using namespace std;

template<class t1>

void add(t1 a, t1 b){
    cout<<endl<<"Addition : "<<a+b;
}

int main(){
    add(2, 5);
    add(2.3, 3.2);
    add('a', 'b');
    return 0;
}