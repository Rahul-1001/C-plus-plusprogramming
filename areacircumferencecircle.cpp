#include<iostream>
using namespace std;

float circumference(int r)
{
    return 2*3.14*r;
}
float area(int r)
{
    return 3.14*r*r;
}
int main() {
    int r=3;
    float circum=circumference(3);
    cout<<circum<<endl;
    float ar=area(3);
    cout<<ar<<endl;
 return 0;

     
}