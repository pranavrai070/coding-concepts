#include <iostream>
using namespace std;

int rotateByOne(int n,int arr[]){
    int temp=arr[0];
    for(int i=1;i<n;i++){
       arr[i-1]=arr[i];
       arr[n-1]=temp;
    }
    return arr[i];

}

int main(){

  int arr[]={1,2,3,4};
  cout<<rotateByOne(4,arr);
  return 0;
  
}