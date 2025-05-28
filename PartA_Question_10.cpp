#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
 static int count;

public:
    Student(string n, int r){
        name=n;
        roll=r;
        count++;
    }
    void display(){
        cout<<"Name: "<<name<<", Roll: "<<roll<<endl;
    }
    static void showCount(){
        cout<<"Total students created: "<<count<<endl;
    }
};
int Student::count = 0;
int main10() {
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    s1.display();
    s2.display();
    Student::showCount();

     cout<<"\nNawaz025"<<endl;
    return 0;
}
/*
Name: Alice, Roll: 101
Name: Bob, Roll: 102
Total students created: 0

Nawaz025
*/
