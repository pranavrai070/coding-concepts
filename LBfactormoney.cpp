#include <iostream>
using namespace std;

int main(){
    int Rs100,Rs50,Rs20,Rs1;
    int n;
    cout<<"Enter the amount of Rupee"<<endl;
    cin>>n;
    switch(1){
    case 1: Rs100=n/100;
    n=n%100;
    cout<<"Number of 100 Rs note is "<<Rs100;

    case 2: Rs50=n/50;
    n=n%50;
    cout<<" Number of 50 Rs note is "<<Rs50;

    case 3:Rs20=n/20;
    n=n%20;
    cout<<" Number of 20 Rs note is "<<Rs20;

    case 4:Rs1=n/1;
    n=n%1;
    cout<<" Number of 1 Rs coin is "<<Rs1;

    }
}