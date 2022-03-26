#include<iostream>
using namespace std;

class ukraine;

class russia{
    private:
    int a;
    public:
    void setdata(){
        cout<<endl<<"Enter a : ";
        cin>>a;
    }
    void printdata(){
        cout<<endl<<"A : "<<a;
    }
    friend int max(russia r1, ukraine u1);
};

class ukraine{
    private:
    int b;
    public:
    void setdata(){
        cout<<endl<<"Enter B : ";
        cin>>b;
    }
    void printdata(){
        cout<<endl<<"B : "<<b;
    }
    friend int max(russia r1, ukraine u1);
};

int max(russia r1, ukraine u1){
    if (r1.a > u1.b){
        cout<<endl<<"A is greater!!";
    } else {
        cout<<endl<<"B is greater!!";
    }
    return 0;
}

int main(){
    russia r1;
    ukraine u1;
    r1.setdata();
    u1.setdata();
    r1.printdata();
    u1.printdata();
    max(r1, u1);
    return 0;
}
