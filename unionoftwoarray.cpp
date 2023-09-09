#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5]={1,3,5,7,9};
    int arrsize=5;
    int brr[4]={2,4,6,8};
    int brrsize=4;
    vector<int>ans;
    
    for(int i=0;i<arrsize;i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<brrsize;i++)
    {
        ans.push_back(brr[i]);
    }
    cout<<"union of  array is: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;

}
//do humne array banaya 
//tisra ans vala vector create kar liya   
//phle array ke sare element ko vector me insert kar diye
//dusre element ko vector me insert kar diye '//aur humne ans vala array print 
//kar diya