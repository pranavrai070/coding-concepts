#include <iostream>
using namespace std;

//by recursion//

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}



int main(){

int n;
cout<<"Enter the number to find factorial"<<endl;
cin>>n;

cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;

}