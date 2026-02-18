#include <iostream>
using namespace std;

int main (){
 int cups;

 double pricePerCup=2.5, totalPrice, discount;
 cout << "How many number of cups do you need?";
    // getline(cin,cups); because cups is not a string so it cant be used

    cin >> cups;
    
if (cups>20){
    discount = 0.20;
}else if (cups>=10 && cups<=20){
    discount=0.10;
}
else{
    discount=0;
}
totalPrice=(pricePerCup*cups)-((pricePerCup*cups)*discount);
cout << "You have to pay: "<<totalPrice;

    return 0;
}