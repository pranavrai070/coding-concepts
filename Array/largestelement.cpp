#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int getLargest(int n,int arr[]){
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return i;
        }
    }
    return -1;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getLargest(n,arr);
    
    return 0;
}

    

    



