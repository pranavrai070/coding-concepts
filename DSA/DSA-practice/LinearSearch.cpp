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

int arr[6]={1,2,3,4,5,6};
int key;
cout<<"Value dalo"<<endl;
cin>>key;
bool found=search(arr,6,key);

if(found){
    cout<<"MIL Gaya"<<endl;
}else{
    cout<<"nhi h bhai"<<endl;
}
}