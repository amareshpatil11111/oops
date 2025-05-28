#include <iostream>
using namespace std;

class Demo{
public:

    Demo(){
        cout<<"Constructor called: Object created."<<endl;
    }
    ~Demo(){
        cout<<"Destructor called: Object destroyed."<<endl;
    }
    void showMessage() {
        cout << "Hello from member function!"<<endl;
    }
};

int main11(){
    cout<<"Entering main function..."<<endl;
    {
        Demo obj;
        obj.showMessage();
    }
    cout<<"Exiting main function..."<<endl;

    cout<<"\nNawaz025"<<endl;
    return 0;
}


/*
Entering main function...
Constructor called: Object created.
Hello from member function!
Destructor called: Object destroyed.
Exiting main function...

Nawaz025
*/
