#include <iostream>
using namespace std;

int main (){
    int tea;
    int pricePerPack;
    int totalPrice;

    cout<<"Enter the number of tea packs: \n";
    cin>>tea;
    cout<<"Enter the price per pack tea: \n";
    cin>>pricePerPack;
    totalPrice=(tea*pricePerPack)+(tea*pricePerPack)*0.10;
    cout<<"The total price to pay: "<<totalPrice;

    return 0;
    
}
