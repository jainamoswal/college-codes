/*Write a program to create a function power. Power should take 2 arguments and return single
value. e.g. Input pow(4,2) , Output>16*/

// Name : Jainam Oswal
// Enrollment : 2104050200025

#include<iostream>
using namespace std;

int power(int a, int b){
    int i, sum=1;
    for(i=0;i<b;i++){
        sum*=a;
    }
    return sum;
}

int main(){
    cout<<power(4, 2);
    return 0;
}