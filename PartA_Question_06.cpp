#include<iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main6() {
    int number;

    cout << "Enter a number to find its square: ";
    cin >> number;
    int result = square(number);

    cout<<"Square of "<< number << " is: "<<result<<endl;

     cout<<"\nNawaz025"<<endl;
    return 0;
}



/*
Enter a number to find its square: 4
Square of 4 is: 16

Nawaz025
*/

