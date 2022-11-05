#include <iostream>
using namespace std;

//good question
int main(){

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}