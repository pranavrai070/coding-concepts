#include <iostream>
using namespace std;


int sumOf(int arr[],int size){
    int sum=arr[0];
    for(int i=1;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}




int main(){

int arr[5]={1,3,4,3,0};


cout<<sumOf(arr,5)<<" ";

}