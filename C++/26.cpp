#include<iostream>
using namespace std;

class math{
    private:
        int a, b;
    public:
        void add(int a, int b);
        void subs(int a, int b);
};

void math::add(int a, int b){
    cout<<endl<<a+b;
}

void math::subs(int a, int b){
    cout<<endl<<a-b;
}

int main(){
    math m1;
    m1.add(4, 5);
    m1.subs(5, 4);
    return 0;
}