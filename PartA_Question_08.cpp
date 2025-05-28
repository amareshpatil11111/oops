#include <iostream>
using namespace std;
class Student{

 string name;
 int age;
public:
 Student(string n,int a){
 name=n;
 age=a;
 }
 void displayInfo(){
 cout<<"Student Name: "<<name<<endl;
 cout<<"Student Age: "<<age<<endl;
 }
};
int main8(){
 Student student1("John", 20);
 Student student2("Alice", 22);
 cout<<"Details of Student 1:"<<endl;
 student1.displayInfo();
 cout<<"\nDetails of Student 2:" << endl;
 student2.displayInfo();



     cout<<"\nNawaz025"<<endl;

 return 0;
}

 /*
 Details of Student 1:
Student Name: John
Student Age: 20

Details of Student 2:
Student Name: Alice
Student Age: 22

Nawaz025
 */


