//multiple languages robot
#include <iostream>
using namespace std;

int main()
{

char button;
cout<<"Enter an alphabet"<<endl;
cin>>button;

// if(button=='a')
// {
//    cout<<"Hello"<<endl;
// }
// else if(button=='b')
// {
//     cout<<"Namaste"<<endl;
// }
// else if(button=='c')
// {
//     cout<<"ka ho kaisan ba"<<endl;
// }
// else if(button=='d')
// {
//     cout<<"kon ho tum"<<endl;
// }
// else{
//     cout<<"Mai tumhe nhi janta"<<endl;
// }


switch (button)
{
case 'a':
    cout<<"bhag jao"<<endl;
    break;
case 'b':
cout<<"kya yar kon ho tum"<<endl;
break;    

default:
cout<<"KYo subh subh aa gye yar"<<endl;
    break;
}
   return 0;
}

