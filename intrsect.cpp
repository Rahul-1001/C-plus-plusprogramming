#include <iostream>
#include<vector>
using namespace std;
  //intersection of two array
int main() {
          vector<int>arr{1,2,3,4,5,6};
        //   int arrsize=6;
          vector<int> brr{2,4,7,5};
        //   int brrsize=4;
          vector<int>ans;
          for(int i=0;i<arr.size();i++)
          {
              int element=arr[i];
              for(int j=0;j<brr.size();j++)
              {
                  if(element==brr[j])
                  {
                      ans.push_back(element);
                  }
              }
          }
          for(auto value : ans)
          {
              cout<<value<<" ";
          }

    return 0;
}