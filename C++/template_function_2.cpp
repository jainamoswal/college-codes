#include<iostream>
using namespace std;

template<class t1, class t2>

void pdata(t1 a, t2 b){
    cout<<endl<<"A : "<<a<< " B : "<<b;
}

int main(){
    pdata(2, 3.9);
    pdata(2.3, 'b');
    pdata('a', 4);
    return 0;
}