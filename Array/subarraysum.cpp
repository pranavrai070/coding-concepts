#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int curr=0;
    for(int i=0;i<n;i++){
        curr=0;
        for(int j=0;j<n;j++){
            curr=curr+a[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}