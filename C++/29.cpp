#include<iostream>
using namespace std;

class india{
    protected:
        int a;
    public:
        void getdata(){
            cout<<"Enter value : ";
            cin>>a;
        }
        void printdata(){
            cout<<endl<<"A >> "<<a;
        }
};

class usa:public india{
    int b;
    public:
        void getusa(){
            cout<<"Enter value : ";
            cin>>b;
        }
        void printusa(){
            cout<<endl<<"B >> "<<b;
        }

        void mul(){
            cout<<endl<<"A * B : "<<a*b;
        }
};


int main(){
    usa u1;
    u1.getdata();
    u1.getusa();
    u1.printdata();
    u1.printusa();
    u1.mul();
    return 0;
}