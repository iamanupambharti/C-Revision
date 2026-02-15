#include <iostream>

using namespace std;

int main (){
    int cups;
    double pricePerCup, discountedPrice, totalPrice;

    cout << "Enter the numbers of the cups: ";
    cin>>cups;
    cout << "Enter the price per cup: ";
       cin >> pricePerCup;
    totalPrice=cups*pricePerCup;
    // Apply 5% discount if total price is above 100$

    if (totalPrice>100){
        discountedPrice = totalPrice-(totalPrice*0.05);    
    }
    else {discountedPrice=totalPrice;

    }
    cout<< "The total amount to pay is : "<<discountedPrice;
    return 0;

}