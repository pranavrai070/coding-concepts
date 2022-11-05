#include <iostream>
using namespace std;

int long long fact(int n){
    int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
return fact;
}


int main(){
int n;
cout<<"Enter the number to find factorial"<<endl;
cin>>n;

cout<<"Fact of given number is "<<fact(n)<<endl;

}