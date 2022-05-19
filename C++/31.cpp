#include<iostream>
using namespace std;

class student{
    private:
        int rno;
        char sname[20];
    public:
        void getstu(){
            cout<<endl<<"Enter Roll No. : ";
            cin>>rno;
            cout<<endl<<"Enter Name : ";
            cin>>sname;
        }

        void printstu(){
            cout<<endl<<"No : "<<rno<<"Name : "<<sname;
        }
};

class marks:public student{
    protected:
        int eng, hindi;
    public:
        void getmarks(){
            cout<<endl<<"[EN] Enter marks : ";
            cin>>eng;
            cout<<endl<<"[HI] Enter marks : ";
            cin>>hindi;
        }

        void printmarks(){
            cout<<endl<<"Eng : "<<eng;
            cout<<endl<<"HIndi : "<<hindi;
        }
};

class result:public marks{
    public:
    void printresult(){
        cout<<endl<<"Total : "<<hindi+eng;
    }
};

int main(){
    result r1;
    r1.getstu();
    r1.printstu();
    r1.getmarks();
    r1.printmarks();
    r1.printresult();
    return 0;
}