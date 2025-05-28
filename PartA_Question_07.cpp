#include <iostream>
#include <string>

void printBill(const std::string &item,int quantity=1, double price=10.0) {
    double total = quantity *price;
    std::cout<<"Item: "<<item<<std::endl;
    std::cout<<"Quantity: "<<quantity<<std::endl;
    std::cout<<"Price per item: $"<<price<<std::endl;
    std::cout<<"Total bill: $"<<total<<std::endl<<std::endl;
}

int main7() {
    printBill("Notebook", 3, 15.5);
    printBill("Pen", 5);
    printBill("Eraser");

    std::cout<<"\nNawaz025"<<std::endl;
    return 0;
}



/*
Item: Notebook
Quantity: 3
Price per item: $15.5
Total bill: $46.5

Item: Pen
Quantity: 5
Price per item: $10
Total bill: $50

Item: Eraser
Quantity: 1
Price per item: $10
Total bill: $10
*/
