#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int& getLarger(int &x, int &y){
    return(x>y)?x:y;
}

int main5(){
    int num1=10,num2=20;
    cout<< "Before swap:\n";
    cout<< "num1 = " << num1<< ",num2 = "<<num2<<endl;
    swap(num1, num2);
    cout<< "\nAfter swap (using call by reference):\n";
    cout<< "num1 = " << num1 << ", num2 = " <<num2<<endl;
    cout<< "\nUsing return by reference to modify the larger value.\n";
    getLarger(num1, num2) = 100;
    cout<< "num1 = " << num1 << ", num2 = "<<num2<<endl;
    cout<<"Nawaz025"<<endl;
    return 0;
}

/*
Before swap:
num1 = 10,num2 = 20

After swap (using call by reference):
num1 = 20, num2 = 10

Using return by reference to modify the larger value.
num1 = 100, num2 = 10
Nawaz025
*/
