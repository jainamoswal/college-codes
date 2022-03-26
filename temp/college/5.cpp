#include<iostream>
using namespace std;

class utils{
    private:
        int rno;
        char name[40];
    public:
        int getData(){
            cout<<"Enter rno  : ";
            cin>>rno;
            cout<<"Enter name : ";
            cin>>name;
            return 0;
        }
        int printData(){
            cout<<"Printing details!!"<<endl;
            cout<<"rno  : "<<rno<<endl;
            cout<<"name : "<<name;
            return 0;
        }
};

int main(){
    utils one;
    one.getData();
    one.printData();
    return 0;
}