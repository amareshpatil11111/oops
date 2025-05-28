#include <iostream>
using namespace std;

class Demo{
private:
    void secretMessage(){
        cout<<"This is a private message!"<<endl;
    }

public:
        void show(){
        cout<<"This is a public inline function."<<endl;
        secretMessage();
    }
};
int main9(){
    Demo obj;
    obj.show();

 cout<<"\nNawaz025"<<endl;
return 0;
}


/*
This is a public inline function.
This is a private message!

Nawaz025
*/
