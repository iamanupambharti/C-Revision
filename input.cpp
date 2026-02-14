#include <iostream>
 
using namespace std;

int main (){

    string userTea ;
    int teaQuantity;

    cout << "What would you like to order in tea ?\n";
    getline(cin, userTea);

    //Ask for quantity

    cout << "how many cups of" << userTea << "Would you like to have ?";
    cin>>teaQuantity;

    cout <<teaQuantity <<endl;
    cout<<userTea;

    return 0;
}