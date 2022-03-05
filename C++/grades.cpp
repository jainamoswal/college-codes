#include<iostream>
using namespace std;

int main(){
	// define variables
    int eng, hin, math, total;
	// ask for inputs
    cout<<endl<<"Enter marks for English : ";
    cin>>eng;
    cout<<endl<<"Enter marks for Hindi : ";
    cin>>hin;
    cout<<endl<<"Enter marks for Maths : ";
    cin>>math;
	// add them all
    total=eng+hin+math;
	// display total marks
    cout<<endl<<"Total marks : "<<total;
	// Print grade as per total marks
    if (total>=90){ // runs if marks ≥ 90
        cout<<endl<<"Grade 'A'";
    } else if(total>=80){ // runs if marks ≥ 80
        cout<<endl<<"Grade 'B'";
    } else if(total>=70){ // runs if marks ≥ 70
        cout<<endl<<"Grade 'C'";
    } else { // else runs this block
        cout<<endl<<"FAIL!!";
    }
	return 0;
}
