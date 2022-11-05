#include <iostream>
using namespace std;

int fun(int n){
    if(n<10)
    return n;

    return fun(n/10)+n%10;
}



int main(){
int n;
cout<<"Enter the number to find out the sum"<<endl;
cin>>n;

cout<<"the sum of the digits of the given numver is "<<fun(n)<<endl;

}