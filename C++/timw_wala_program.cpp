#include<iostream>
using namespace std;

class tImE{
    private:
        int hour, minute;
    public:
        void setData(){
            cout<<"Enter hour : ";
            cin>>hour;
            cout<<"Enter minuutes : ";
            cin>>minute;
        }

        void printData(){
            cout<<"Hour : "<<hour<<endl<<"Minutes : "<<minute<<endl;
        }

        void add(tImE t1, tImE t2){
            minute = (t1.minute + t2.minute)%60;
            hour = ((t1.minute + t2.minute)/60) + t1.hour + t2.hour;
            cout<<hour<<endl;
            cout<<minute<<endl;
        }
};

int main(){
    tImE t1, t2, t3;
    t1.setData();
    t2.setData();
    //t1.printData();
    //t2.printData();
    //t3.printData();
    t3.add(t1, t2);
    return 0;
}