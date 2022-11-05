#include<iostream>
using namespace std;

int main()
{
   
   int pocketMoney=3000;
   for(int date=1;date=30;date++){
       
       if(date%2==0){
           continue;
       }
       if(pocketMoney==0){
           break;
       }
       cout<<"Go out Today";
       pocketMoney=pocketMoney-30;
   }


    return 0;
}