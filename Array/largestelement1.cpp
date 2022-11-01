#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int getLargest(int n,int arr[]){
    int res=0;
    for(int i=0 ;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
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