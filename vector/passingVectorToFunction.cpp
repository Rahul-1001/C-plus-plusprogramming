 #include<iostream>
 //vector are passed by value each time you pass new vector is created
 
 #include<vector>
 using namespace std;
//  void change(vector<int>a)
  void change(vector<int>& a)
 {
    a[0]=10;
      for(int i=0;i<a.size();i++)
  {
    cout<<a[i];
    cout<<endl;
  }

 }
 int main()
 {
    vector<int>v;
  v.push_back(9);
  v.push_back(4);
  v.push_back(6);
  v.push_back(2);
  v.push_back(1);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i];
  }
  cout<<endl;
 //function
 change(v);
   for(int i=0;i<v.size();i++)
  {
    cout<<v[i];
  }

    
 }