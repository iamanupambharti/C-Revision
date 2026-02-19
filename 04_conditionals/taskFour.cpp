#include <iostream>
using namespace std;

int main (){
int choice;
double price;

cout<<"Select Your tea\n";
cout<<"1.Green Tea\n";
cout<<"2.Lemon tea\n";
cout<<"3.Oolong tea\n";
cout<<"Enter your choice in number: \n";
cin >> choice;

switch (choice){
    case 1:
        price=2.0;
        cout <<"You selected Green tea. Price: "<<price;
        break;
        price=3.0;
        cout <<"You selected Lemon tea. Price: "<<price;
        break;
        case 3:
        price=4.0;
        cout <<"You selected Oolong tea. Price: "<<price;
        break;
        case 4:
        default:
        cout <<"Invalid Choice";
}


return 0;
}