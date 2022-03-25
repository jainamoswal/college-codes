/*Create a class tutor which contains tutorname, tutorsubject, tutorfees. Create setdata() and
printdata() data function which takes the values and prints the values respectively. And create
an object to present a demonstration.*/

// Name : Jainam Oswal
// Enrollment : 2104050200025


#include <iostream>
using namespace std;

class tutor{
    private:
        int tutorfees;
        char tutorname[30], tutorsubject[10];
    public:
        void setdata(){
            cout<<"\nEnter Employee name : ";
            cin>>tutorname;
            cout<<"\nEnter tutorsubject : ";
            cin>>tutorsubject;
            cout<<"\nEnter tutorfees : ";
            cin>>tutorfees;
        }
        void printdata(){
            cout<<"\ntutorname        : "<<tutorname;
            cout<<"\ntutorsubject            : "<<tutorsubject;
            cout<<"\ntutorfees  : "<<tutorfees;
        }
};

int main(){
    tutor t1;
    t1.setdata();
    t1.printdata();
}