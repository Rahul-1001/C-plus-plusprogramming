#include<iostream>
using namespace std;

int addition(int num1, int num2)
{
   int  result =num1+num2;
   return (result);

}
int main() {
   int x= addition(3,5);
   cout<<"The sum of two numbers is: "<<x<<endl;
   return 0;
}
