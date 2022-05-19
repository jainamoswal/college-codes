#include<iostream>
using namespace std;

class math{
    private:
        int a, b;
    public:
        math(){
            a = 20;
            b=40;
        }
        math(int x, int y){
            a = x;
            b = y;
        }
        void print(){
            cout<<a<<endl<<b<<endl;
        }
};

int main(){
    math m1, m2(9, 10);
    m1.print();
    m2.print();
    return 0;
}