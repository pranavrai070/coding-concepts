#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
   for(int i=0;i<size;i++){
       if(arr[i]==key){
           return 1;
       }
   }
   return 0;


}

int main(){

int arr[10]={1,4,3,5,7,65,4,4,3,2};
cout<<"Eneter the value to be searched"<<endl;
int key;
cin>>key;

bool found=search(arr,10,key);

if(found){
    cout<<"YES operation succesfull"<<endl;
}
else{
    cout<<"Sorry he is no more"<<endl;
}

}