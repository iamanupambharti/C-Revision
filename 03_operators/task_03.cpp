// Relational operator
#include <iostream>

using namespace std;

int main (){

    int cups;
    cout<<"Enter the number opf cups you have";
    cin>>cups;


    if (cups> 20){
        cout<<"You will get a Gold Badge";
    } else if (cups >10 && cups<20){
        cout<< "You will get Silver Badge"<< endl;
    }
    else{
        cout<<"NO badge for you";
    }
 return 0; }