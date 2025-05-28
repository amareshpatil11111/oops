//Write a C++ program to demonstrate function prototyping and function overloading
#include <iostream>
using namespace std;

void greet();
void greet(string name);

int main4() {
    greet();
    greet("Nawaz");

    return 0;
}
void greet() {
    cout <<"Hello! Welcome to the C++ program."<< endl;
}
void greet(string name) {
    cout <<"I am "<<name<<"\nOnce again Welcome to the C++ program"<<endl;

     cout<<"\nNawaz025"<<endl;
}
/*

Hello! Welcome to the C++ program.
I am Nawaz
Once again Welcome to the C++ program

Nawaz025
*/
