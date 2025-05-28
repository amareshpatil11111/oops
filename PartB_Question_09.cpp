#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"This animal eats food."<<endl;
    }

    void sleep(){
        cout<<"This animal sleeps."<<endl;
    }
};
class DogPublic:public Animal{
public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
};
class DogPrivate:private Animal{
public:
    void bark(){
        cout<<"The dog barks."<<endl;
    }
    void showSleep(){
        sleep();
    }
};
int main09(){
    DogPublic dog1;
    dog1.eat();
    dog1.bark();
    DogPrivate dog2;
    dog2.bark();
    dog2.showSleep();

    cout<<"\nNawaz025"<<endl;
    return 0;
}


/*
This animal eats food.
The dog barks.
The dog barks.
This animal sleeps.

Nawaz025
*/
