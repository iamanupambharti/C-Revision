#include <iostream>
using namespace std;

int main (){
    int teaBags=0;
    cout <<"Enter the number of tea bags you have: ";
    cin>>teaBags;
    if(teaBags<20){
        teaBags+=10;
        cout<<teaBags;
    }
    else{
        cout<<teaBags;
    }
    return 0;
}