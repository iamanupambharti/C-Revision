#include <iostream>
using namespace std;

int main (){
bool isMember;
int cups;

cout<<"How much cups you are buying?";
cin>>cups;

cout<<"Are you a Member?(1 for yes 0 for no)";
cin>>isMember;

if(isMember||cups>12){
    cout<<"You will get Discount";
}else{
    cout<<"You will not get any Discount";
}
return 0;
}