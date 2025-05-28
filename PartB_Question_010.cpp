#include<iostream>
using namespace std;
class School;

class Student {
private:
    int score;

public:
    Student(int s) : score(s) {}
    friend void displayScore(Student);
    friend class School;
};

class School{
private:
    string name;
public:
    School(string n) : name(n){}
    void showStudentScore(Student s){
        cout<<"Student's score from School "<<name<<": "<<s.score<<endl;
    }
};

void displayScore(Student s) {
    cout << "Displaying Student's score using friend function: " <<s.score<<endl;
}

int main() {
    Student student1(85);
    School school1("Greenwood High");
    displayScore(student1);
    school1.showStudentScore(student1);

    cout << "\nNawaz025" << endl;
    return 0;
}


/*
Displaying Student's score using friend function: 85
Student's score from School Greenwood High: 85

Nawaz025
*/
