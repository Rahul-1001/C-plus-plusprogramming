#include<iostream>
using namespace std;
int main()
{
    int marks[5]={21,56,43,32,12};
    for(int i=0;i<=4;i++)
    {
        if(marks[i]<35)
        {
            cout<< marks[i]<<endl;
        }
    }
}