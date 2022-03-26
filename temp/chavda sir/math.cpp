#include<iostream>
using namespace std;

class math{
    private:
        int x, y;
    public:
        void setData(){
            cout<<endl<<"Enter two values : ";
            cin>>x>>y;
        }

        void printData(){
            cout<<endl<<"x = "<<x<<" & y = "<<x+y;
        }

        void add(){
            cout<<endl<<"x + y : "<<x+y;
        }

        void sub(){
            cout<<endl<<"x - y : "<<x-y;
        }

        void mul(){
            cout<<endl<<"x * y : "<<x*y;
        }

        void div(){
            cout<<endl<<"x / y : "<<x/y;
        }

        void mod(){
            cout<<endl<<"x % y : "<<x%y;
        }

};

int main(){
    math mathoob;
    mathoob.setData();
    mathoob.printData();
    mathoob.add();
    mathoob.sub();
    return 0;
}