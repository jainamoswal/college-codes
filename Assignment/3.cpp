/*Create a class employee which contains employeename, employeesalary, employeetitle. Create
setdata() and printdata() data function which takes the values and prints the values respectively.
And create an object to present a demonstration.*/

// Name : Jainam Oswal
// Enrollment : 2104050200025


#include <iostream>
using namespace std;

class employee{
    private:
        int employeesalary;
        char employeename[30], employeetitle[10];
    public:
        void setdata(){
            cout<<"\nEnter Employee name : ";
            cin>>employeename;
            cout<<"\nEnter employeetitle : ";
            cin>>employeetitle;
            cout<<"\nEnter employeesalary : ";
            cin>>employeesalary;
        }
        void printdata(){
            cout<<"\nemployeename        : "<<employeename;
            cout<<"\nemployeetitle            : "<<employeetitle;
            cout<<"\nemployeesalary  : "<<employeesalary;
        }
};

int main(){
    employee e1;
    e1.setdata();
    e1.printdata();
}