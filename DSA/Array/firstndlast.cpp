#include <iostream>
using namespace std;

int firstoccr(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
          ans=mid;
          e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
          e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int lastoccr(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
          ans=mid;
          s=mid+1;
        }
        else if(key>arr[mid]){
           s=mid+1;
        }
        else if(key<arr[mid]){
          e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}



int main(){
    int arr[11]={1,2,3,3,3,3,3,4,5,6,7};
    cout<<"first occr of 3 is "<<firstoccr(arr,11,3)<<endl;
    cout<<"last occr of 3 is "<<lastoccr(arr,11,3)<<endl;


}
