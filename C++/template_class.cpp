#include<iostream>
using namespace std;

template<class t1>

class math{
    private:
        t1 a, b;
    public:
        math(t1 x, t1 y){
            a = x;
            b = y;
        }

        void printdata(){
            cout<<endl<<"A : "<<a;
            cout<<endl<<"B : "<<b;
        }

};

int main(){
    math<int> m1(3, 4);
    math<float> m2(3.9, 4);
    math<int, float> m3(3, 3.9);
    m1.printdata();
    m2.printdata();
    return 0;
}