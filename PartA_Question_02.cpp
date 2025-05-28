//Write a C++ program that demonstrates the use of iostream classes and iomanip manupulators
#include<iostream>
#include<iomanip>
using namespace std;
int main2(){
string Product1="Pen", Product2="Book";
float Price1=10.5, Price2=50.5;

cout<<"Item"<<setw(20)<<"Price"<<endl;
cout<<"________________________________"<<endl;

cout<<Product1<<setw(20)<<fixed<<setprecision(4)<<Price1<<endl;
cout<<Product2<<setw(19)<<fixed<<setprecision(4)<<Price2<<endl;

cout<<endl<<"Thank you"<<endl;

cout<<"Nawaz025"<<endl;
return 0;
}
/*output:
Item               Price
________________________________
Pen             10.5000
Book            50.5000

Thank you
Nawaz025*/
