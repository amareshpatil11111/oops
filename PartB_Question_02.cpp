#include <iostream>
using namespace std;

class Counter{
private:
    int value;

public:
    Counter(int v = 0){
           value= v;
}
    void display() const{
        cout<<"Current Value: "<<value<<endl;
    }
    Counter& operator++(){
        ++value;
        return *this;
    }
    Counter operator++(int){
        Counter temp = *this;
        value++;
        return temp;
    }
    bool operator==(const Counter& other) const{
        return value == other.value;

    }

};


int main02() {
    Counter c1(10), c2(10), c3(20);
    cout<<"Initial values:"<<endl;
    c1.display();
    c2.display();
    c3.display();
         ++c1;
    cout << "\nAfter pre-increment on c1:" << endl;
    c1.display();
    c2++;
    cout<<"After post-increment on c2:"<<endl;
    c2.display();
    cout<<"\nComparing c1 and c2: ";
    if(c1 == c2)
        cout<<"c1 and c2 are equal."<<endl;
    else
        cout << "c1 and c2 are not equal."<<endl;

    cout<<"Comparing c1 and c3:";
    if (c1 == c3)
        cout<<"c1 and c3 are equal."<<endl;
    else
        cout<<"c1 and c3 are not equal."<<endl;

        cout<<"\nNawaz025"<<endl;
    return 0;
}


     /*
Initial values:
Current Value: 10
Current Value: 10
Current Value: 20

After pre-increment on c1:
Current Value: 11
After post-increment on c2:
Current Value: 11

Comparing c1 and c2: c1 and c2 are equal.
Comparing c1 and c3:c1 and c3 are not equal.

Nawaz025
     */
