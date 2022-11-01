#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
   for(int i=1;i<=n;i++){
       int j;
       for(j=1;j<=n;j++){
           int sum=i+j;
         if(i+j==n+1){
           cout<<"* ";
         }else{
             cout<<"  ";
         }
        }
        for(j=1;j<=i-1;j++){
            if(j==1 || j==2*i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
   }

   for(int i=n;i>=1;i--){
       int j;
       for(j=1;j<=n;j++){
           int sum=i+j;
         if(i+j==n+1){
           cout<<"* ";
         }else{
             cout<<"  ";
         }
        }
        for(j=1;j<=i-1;j++){
            if(i==j){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
   }

   
   return 0;
}