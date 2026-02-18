// Write a program that checks if the user want the "Green Tea "

#include <iostream>
using namespace std;

int main (){
     string teaOrder;
     cout<< "Enter you tea-order:";
     getline(cin,teaOrder);
     
     if(teaOrder=="Green Tea"){
         cout<< "You have ordered Green Tea"<<endl;
    }

    return 0;
}