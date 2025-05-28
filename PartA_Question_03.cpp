//Write a C++ program to demonstrate the use of various control structures
#include<iostream>
using namespace std;

int main3(){
int num;

cout<<"Enter a number:\n"<<endl;
cin>>num;

if(num>0){
    cout<<"You entered a positive number"<<endl;
    }
    else if(num<0){
        cout<<"You entered a negative number"<<endl;
    }
    else{
        cout<<"You entered a zero"<<endl;
    }

    int choice;
    cout<<"\nMenu:\n1.Say Hello\n2.Say Goodbye\nEnter your choice:";
    cin>>choice;

    switch(choice){
case 1:
    cout<<"Hello!"<<endl;
    break;

    case 2:
    cout<<"Goodbye!"<<endl;
    break;

    default:
         cout<<"Invalid!"<<endl;
    break;
    }

    cout<<"\nUsing for loop:";
    for(int i=1;i<=5;i++){
        cout<<i<<"";
    }
    cout<<endl;

    int count=5;
    cout<<"Using while loop:";
    while(count>0){
          cout<<count<<"";
          count--;
          }
    char again;
    do{
        cout<<"This is do-while loop.\nDo you want to repeat?(y/n):"<<endl;
        cin>>again;
    }
    while(again=='y'||again=='n');

    cout<<"\nNawaz025"<<endl;
            return 0;
}



/*output:
Enter a number:

6
You entered a positive number

Menu:
1.Say Hello
2.Say Goodbye
Enter your choice:1
Hello!

Using for loop:12345
Using while loop:54321This is do-while loop.
Do you want to repeat?(y/n):
y
This is do-while loop.
Do you want to repeat?(y/n):
y
This is do-while loop.
Do you want to repeat?(y/n):
yes
This is do-while loop.
Do you want to repeat?(y/n):

Nawaz025
*/
