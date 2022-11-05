#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
           start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}


int main(){

    int even[6]={2,3,6,9,10,14};
    int odd[5]={9,13,56,67,78};

    int evenIndex=binarySearch(even,6,12);
    int oddIndex=binarySearch(odd,5,9);

    cout<<"index of 12 is "<<evenIndex<<endl;
    cout<<"index of 9 is "<<oddIndex<<endl;



}