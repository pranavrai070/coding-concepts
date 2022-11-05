#include <iostream>
using namespace std;

bool isPal(string str, int s,int e){
    // s=0;
    // e=str.length()-1;

    
    if(s==e) return true;
    if(s>e) return true;

    if(str[s]!=str[e]) return false;

    return isPal(str,s+1,e-1);
}


int main(){
string str;
cout<<"Enter the string to find out "<<endl;
cin>>str;
int s=0;
int n =str.length();
int e=n-1;

if(isPal(str,s,e)){
    cout<<"Yes"<<endl;
}else{
    cout<<"NO"<<endl;
}

}