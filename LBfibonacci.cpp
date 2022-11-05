#include<iostream>
using namespace std;

int main(){
    int n=10;
    
    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";
    int sum=0;
    for(int i=1;i<=n;i++){
        int nxtnum=a+b;
        cout<<nxtnum<<" ";
        a=b;
        b=nxtnum;
    }

}    