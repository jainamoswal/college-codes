/*Create a class bank which contains userid, amount, username. Create setdata() and printdata()
data function which takes the values and prints the values respectively. And create an object to
present a demonstration.*/

// Name : Jainam Oswal
// Enrollment : 2104050200025


#include <iostream>
using namespace std;

class bank{
    private:
        int userid, amount;
        char username[10];
    public:
        void setdata(){
            cout<<"\nEnter userid : ";
            cin>>userid;
            cout<<"\nEnter amount : ";
            cin>>amount;
            cout<<"\nEnter username : ";
            cin>>username;
        }
        void printdata(){
            cout<<"\nUserID        : "<<userid;
            cout<<"\nAmount        : "<<amount;
            cout<<"\nUsername      : "<<username;
        }
};

int main(){
    bank b1;
    b1.setdata();
    b1.printdata();
}