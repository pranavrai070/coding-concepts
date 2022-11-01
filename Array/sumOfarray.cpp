#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
      sum+=arr[i];
    }
    return sum;
}


int main()
{
   
   int arr[5]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   int ans=sumOfArray(arr,size);

   cout<<"Sum of array now is "<<ans<<endl;


}