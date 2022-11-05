#include <iostream>
using namespace std;

void printArray(int arr[],int size){
       for(int i=0;i<size;i++){
           cout<<arr[i]<<" ";
       }cout<<endl;

}


void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main(){


    int odd[5]={1,2,3,4,5};
    int even[6]={2,3,4,6,4,9};

    alternate(odd,5);
    alternate(even,6);

    printArray(odd,5);
    printArray(even,6);

}