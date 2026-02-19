#include<iostream>
using namespace std;

int main ()
{
    int teaCups;
    cout<<"Enter the cups you need: ";
    cin>>teaCups;
    // WHile Loop
    while(teaCups>0)
    {
        teaCups --;
        cout<<"Serving a Cup of tea\n"<<teaCups<<" Cups Remaining"<<endl;

    }
    cout << "All cups are served";
    return 0;
    
}