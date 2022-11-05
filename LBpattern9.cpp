#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int count=i;
    while(i<=n){
        int j=1;
        while(j<=i){
          cout<<i-j+1<<" ";
          count++;
          j++;
        }
        cout<<endl;
        i++;
    }
}