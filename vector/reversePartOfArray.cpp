#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}
void reversePart(int i,int j,vector<int>& a)
{
    while(i<=j)
    {
        int temp=a[i];
         a[i] =  a[j];
         a[j] =temp ;
         i++;
         j--;

    }
    return;
}
void reverse(vector<int>& a)
{
      int i=0;
      int j=a.size()-1;
    //reverse
    while(i<=j)
    {
        //swap v[i] and v[j]
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int>v;
   
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(4);
    display(v);
    cout<<endl;
    // reversePart(0,3,v);
    // cout<<endl;
    reverse(v);
    cout<<endl;
    display(v);
  
}