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


int total(int arr[],int n,int key){
return lastoccr(arr,n,key)-firstoccr(arr,n,key)+1;
}




int main(){
int arr[]={1,2,3,3,3,3,5};
int arr1[]={1,2,3,4,4,4,4,4,4,4,4,4,5};

cout<<"Total number of occurence of 3 is "<<total(arr,7,3)<<endl;
cout<<"Total number of occurence of 4 is "<<total(arr1,13,4)<<endl;
}