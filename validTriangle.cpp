#include <iostream>
using namespace std;

int main(){
   
 int a,b,c;
cin>>a>>b>>c;
if(a+b>c&&b+c>a&&c+a>b){
  cout<<"Valid"<<endl;
}else{
  cout<<"Not Valid"<<endl;
}


    return 0;

}