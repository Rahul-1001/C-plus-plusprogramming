#include<iostream>
using namespace std;
int main() {
    char ch='a';
    cout<<endl;
 switch(ch){      //switch ke andar expression   
    case 1:cout<<"first"<<endl;     //after the case we can only use char and int we 
    //cant use float and string 
    break;
    case 'a':cout<<"character"<<endl;
    break;
    default :cout<<"default"<<endl;

 }
 cout<<endl;
 return 0;
}