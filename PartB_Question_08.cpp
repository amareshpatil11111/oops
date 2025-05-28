#include<iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }
};

class Sound{
public:
    void makeSound(){
        cout <<"This animal makes a sound."<<endl;
    }
};
class Mammal:public Animal{
public:
    void walk(){
        cout<<"This mammal walks."<<endl;
    }
};
class Dog:public Mammal,public Sound{
public:
    void bark(){
        cout <<"The dog barks."<<endl;
    }
};
int main08(){
    Dog myDog;
    myDog.eat();
    myDog.makeSound();
    myDog.walk();
    myDog.bark();

 cout<<"\nNawaz025"<<endl;
    return 0;
}

/*
This animal eats food.
This animal makes a sound.
This mammal walks.
The dog barks.

Nawaz025
*/
