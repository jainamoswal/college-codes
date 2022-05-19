//hybrid

class student{

};

class marks:public student{

};

class sports{

};

class result:public marks, public sports{

};

int main(){
    result r1;
    r1.getstu();
    r1.marks();
    r1.cricket();
    r1.printstu();
    r1.printmarks();
    r1.printcricket();
    r1.result();
}