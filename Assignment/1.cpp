/*Create a class student which contains rollno, name, hindi and english marks. Create setdata()
and printdata() data function which takes the values and prints the values respectively. And
create an object to present a demonstration.*/

// Name : Jainam Oswal
// Enrollment : 2104050200025

#include <iostream>
using namespace std;

class student{
    private:
        int rollno, hindi, english;
        char name[30];
    public:
        void setdata(){
            cout<<"\nEnter roll no : ";
            cin>>rollno;
            cout<<"\nEnter name : ";
            cin>>name;
            cout<<"\nEnter marks for hindi : ";
            cin>>hindi;
            cout<<"\nEnter marks for english : ";
            cin>>english;
        }
        void printdata(){
            cout<<"\nRoll No          : "<<rollno;
            cout<<"\nName             : "<<name;
            cout<<"\nMarks in Hindi   : "<<hindi;
            cout<<"\nMarks in english : "<<english;
        }
};

int main(){
    student s1;
    s1.setdata();
    s1.printdata();
}