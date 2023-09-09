#include<iostream>
using namespace std;
int main()
{


int ch;
cout<<"enter a character :";
cin>>ch;
int ascii=(int)ch;
if(ascii>=97&& ascii<=122)
{
    cout<<"the character is lowercase alphabet";
}
 if(ascii>=65&&ascii<=98)
 {
    cout<<"the character is uppercase alphabet"
 }

}
