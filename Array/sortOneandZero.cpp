#include<iostream>
using namespace std;

void sortOne(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0 && i<j) i++;  //if ka use kyo nhi kr skte 
        while(arr[j]==1 && i<j) j--;  //while ki jagah if ka use kr rhe hain to ans galat aa rha h

    // agr yha pahuch gye ho to iska matlab  arr[i]==1 hoga or arr[j]==0 hoga
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

int main()
{
    int arr[10]={1,0,0,1,1,0,1,0,1,0};

    sortOne(arr,10);
    printArray(arr,10);
}