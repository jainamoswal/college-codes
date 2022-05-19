#include<iostream>
using namespace std;

class student{
    private:
        char sname[20];
    public:
        ~student(){
            cout<<endl<<"bye";
        }
        void getdata(){
            cout<<endl<<"Enter student name : ";
            cin>>sname;
        }
        void printdata(){
            cout<<sname;
        }
};

int main(){
    student s1;
    {
        student s2;
        {
            student s3;
            s3.getdata();
            s3.printdata();
        }
        s2.getdata();
        s2.printdata();
    }
    s1.getdata();
    s1.printdata();
    return 0;
}