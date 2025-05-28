#include<iostream>
using namespace std;
class Distance {
private:
    int feet;

public:
    Distance(int f) : feet(f) {}
    operator int() {
        return feet;
    }
};
int main04() {
    int num = 10;
    Distance dist(num);
    int distInFeet = dist;
    cout << "Distance as object: "<<distInFeet<<" feet"<<endl;

   cout<<"\nNawaz025"<<endl;
    return 0;
}


/*
Distance as object: 10 feet

Nawaz025
*/
