#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) :real(r),imag(i) {}

    void display() const {
        cout << real << " + "<<imag<<"i"<<endl;
    }

    Complex operator+(const Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }

    Complex& operator=(const Complex& other){
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }
};

int main03() {
    Complex c1(3, 4), c2(1, 2), c3(0, 0);

    cout << "Complex Number c1: ";
    c1.display();

    cout << "Complex Number c2: ";
    c2.display();

    c3 = c1 + c2;
    cout << "Result of c1 + c2: ";
    c3.display();

    Complex c4;
    c4 = c3;
    cout << "Complex Number c4 (after assignment from c3): ";
    c4.display();

    cout << "\nNawaz025" << endl;
    return 0;
}


/*
Complex Number c1: Complex Number: 3+4i
Complex Number c2: Complex Number: 1+2i
Result of c1 + c2: Complex Number: 4+6i
Complex Number c4 (after assignment from c3): Complex Number: 4+6i

Nawaz025
*/
