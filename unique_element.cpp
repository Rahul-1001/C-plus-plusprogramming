#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector <int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
        //xor duplicate element ko kaat deta hai
        //1^0->1
        //0^0->0
    }
    return ans;
}
int main()
{     int size;
      int n;
    cout<<"enter the size of vector"<<endl;
     cin>>n;
     vector<int>arr(n);
     cout<<"printing the element";
     for(int i=0;i<arr.size();i++)
     {
           cin>>arr[i];
     }
     int uniqueElement=findUnique(arr);
     cout<<"the unique element is"<<uniqueElement<<endl;
     return 0;
}