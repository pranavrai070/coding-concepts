#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans=ans+x*y;
        x=x*2;
        n=n/10;
    }
    return ans;
}

int decimalToBinary(int n)
{
      int x=1;
      int ans=0;
      while(x<=n)
       x=x*2;
      x=x/2;

      while(x>0){
          int lastDigit =n/x;
          n=n-lastDigit*x;
          x=x/2;
          ans=ans*10 + lastDigit;
      }
      return ans;
}



int addBinaries( int a ,int b){
   int add= binaryToDecimal(a) + binaryToDecimal(b);
   int addcon=decimalToBinary(add);
   return addcon;
}



int main(){

int a,b;
cin>>a>>b;

cout<<addBinaries(a,b)<<endl;

    return 0;
}