#include<iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }
};
class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal walks." << endl;
    }
};
class Dog : public Mammal {
public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
};
int main06() {
    Dog myDog;
    myDog.eat();
    myDog.walk();
    myDog.bark();

   cout<<"\Nawaz025"<<endl;
    return 0;
}

/*
This animal eats food.
This mammal walks.
The dog barks.

Nawaz025

*/
