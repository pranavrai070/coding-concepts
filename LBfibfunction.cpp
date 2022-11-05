#include <iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int nextnum;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        nextnum=a+b;
        a=b;
        b=nextnum;
    }
    return;
}

int main(){

int a;
cin>>a;
fibonacci(a);
return 0;
}
