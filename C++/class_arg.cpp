#include<iostream>
using namespace std;

class math{
    int a, b;
    public:
    void setData(){
        cout<<endl<<"Enter A > ";
        cin>>a;        
        cout<<endl<<"Enter B > ";
        cin>>b;
    }
void printdata(){
    cout<<"A >> "<<a<<endl<<"B >> "<<b<<endl;
}

void add(math m1, math m2){
    a = m1.a + m2.a;
    b = m1.b + m2.b;
}
};

int main(){
    math m1, m2, m3;
    m1.setData();
    m1.printdata();
    m2.setData();
    m2.printdata();
    m3.add(m1, m2);
    m3.printdata();
    return 0;
}