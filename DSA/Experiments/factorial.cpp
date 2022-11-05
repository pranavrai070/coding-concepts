#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int fact(int n){
   if(n==1) return 1;
   else if(n==0) return 1;
   else return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"Factorial of number is "<<fact(n)<<endl;
}
