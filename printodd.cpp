#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int num=1;num<=n;num++){
        if(num%2==0){
            continue;
        }
        cout<<num<<endl;
    }
    

    return 0;
}