#include<iostream>
using namespace std;
class Animal {
public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }
};
class Sound{
public:
    void makeSound(){
        cout<<"This animal makes a sound."<<endl;
    }
};
class Dog:public Animal, public Sound{
public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
};
int main07(){
    Dog myDog;
    myDog.eat();
    myDog.makeSound();
    myDog.bark();

    cout<<"\nNawaz025"<<endl;
    return 0;
}


/*
This animal eats food.
This animal makes a sound.
The dog barks.

Nawaz025
*/
