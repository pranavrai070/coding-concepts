#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int arr[7]={2,3,4,5,6,7,8};
int brr[6]={-1,4,6,3,9,5};


reverse(arr,7);
reverse(brr,6);


printArray(arr,7);
printArray(brr,6);

}