#include <iostream>

using namespace std;

int main (){
int cups;
bool isStudent;
cout <<"Are you a student(1 for Yes and 0 for No)?";
cin>>isStudent;
cout << "How many cups of tea have you purchased ?";
cin >> cups;

if(isStudent|| cups > 15){
    cout<< "You are eligible for a discount"<<endl;

}else {
    cout <<"You are NOT eligible for a discount"<<endl;
}

return 0;
}