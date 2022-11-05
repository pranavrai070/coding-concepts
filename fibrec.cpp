#include <iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}



int main(){
int n;
cout<<"Enter the number to find fibonacci "<<endl;
cin>>n;

cout<<"Fibonacci of given number is "<<fib(n)<<endl;

}