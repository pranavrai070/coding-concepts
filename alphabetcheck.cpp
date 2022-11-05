#include<iostream>
using namespace std;

int main(){

char alpha;
int isLvowel,isUvowel;

cout<<"Enter your aplhabet   ";
cin>>alpha;



isLvowel=(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u');
isUvowel=(alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U');

if(isLvowel||isUvowel){
    cout<<"It is a Vowel";
}
else{
    cout<<"It is a consonant";
}


return 0;
}
