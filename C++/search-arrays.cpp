#include<iostream>
using namespace std;

int main(){
    // define variables
    int a[5], find, i;
    // ask for input in loop
    for (i = 0; i < 5; i++){
        cout<<endl<<"Enter value for a["<<i<<"] : ";
        cin>>a[i];
    }
    // ask for vale to find
    cout<<endl<<"Enter the vale to find : ";
    cin>>find;
    // useing loop to find a value in array
    for (i = 0; i < 5; i++){
        if (a[i] == find){ // runs in case array contains search int 
            cout<<endl<<"Found "<<find<<" at a["<<i<<"]";
            // use break; to return after first found!
        }        
    }
    
    return 0;
}
