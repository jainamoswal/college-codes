#include<iostream>
using namespace std;

class bank{
    private:
        int accno, bal;
        char cname[20];

    public:
        void openAccount(){
            cout<<endl<<"Enter Account no. : ";
            cin>>accno;

            cout<<endl<<"Enter Name : ";
            cin>>cname;

            cout<<endl<<"Enter Balance : ";
            cin>>bal;
        }
        void printData(){
            cout<<endl<<"Account No. : "<<accno;
            cout<<endl<<"Name        : "<<cname;
            cout<<endl<<"Balance     : "<<bal<<" $";
        }

        void deposit(){
            int x;
            cout<<endl<<"Enter amount to deposit : ";
            cin>>x;
            bal=bal+x;
        }
        
        void withdrawl(){
            int x;
            cout<<endl<<"Enter amount to witdrawl : ";
            cin>>x;
            bal=bal-x;
        }
};

int main(){
    bank customer1;

    customer1.openAccount();
    customer1.printData();
    customer1.deposit();
    customer1.withdrawl();
    customer1.printData();
    return 0;

}


