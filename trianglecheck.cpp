#include<iostream>
using namespace std;

int main(){

int n1,n2,n3;
cin>>n1>>n2>>n3;

if(n1==n2 && n2==n3){
    cout<<"Triangle is Equilateral";
}else if(n1==n2 || n1==n3 || n2==n3){
    cout<<"Triangle is Isosceles";
}
else{
    cout<<"Triangle is Scalene";
}

return 0;
}