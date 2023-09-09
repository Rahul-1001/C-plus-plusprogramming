#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
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
    // int i=0;
    // int j=v.size()-1;
    // //reverse
    // while(i<=j)
    // {
    //     //swap v[i] and v[j]
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // cout<<endl;
    cout<<endl;
    reverse(v.begin(),v.end());
    display(v);
  
}