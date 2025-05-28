#include<iostream>
using namespace std;
class Animal {
public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }
};
class Dog : public Animal{
public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
};
int main05() {
    Dog myDog;
    myDog.eat();
    myDog.bark();

    cout<<"\nNawaz025"<<endl;
    return 0;
}


/*
This animal eats food.
The dog barks.

Nawaz025
*/
