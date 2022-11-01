#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Enter the Numbers of row and column respectivly";
    cin>>n1>>n2;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}