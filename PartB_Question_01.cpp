#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i){
 real = r;
 imag= i;
}


    void display() const{
        cout<<"Complex Number: "<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator-(){
        return Complex(-real, -imag);
    }
};
int main01(){

    Complex c1(3,4);
    cout << "Original Complex Number: ";
    c1.display();


    Complex c2 = -c1;

    cout<<"Negated Complex Number: ";
    c2.display();

     cout<<"\nNawaz025"<<endl;
    return 0;
}

/*
Original Complex Number: Complex Number: 3+4i
Negated Complex Number: Complex Number: -3+-4i

Nawaz025
*/
