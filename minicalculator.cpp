//i will give input a,b and operator you have to perform the following expression
//and made a mini calculator
    //  **********************CALCULATOR**************************************
  #include<iostream>
  using namespace std;
  int main()
  {
    int a,b;
    cout<<"Enter the value of a:"<<endl;
     cin>>a;
      cout<<"Enter the value of b:"<<endl;
      cin>>b;
      char op;
      cout<<"enter the operation you want to perform"<<endl;
      cin>>op;
      switch( op )
      {
        case '+': cout<<(a+b) <<endl;
                break;
        case '-': cout<<(a-b) <<endl;
                break;
        case '*': cout<<(a*b) <<endl;
               break;
        case '/':cout<<(a/b) <<endl;
               break;
        case '%':cout<<(a%b) <<endl;
               break;
        default:cout<<"please enter valid operation"<<endl;


      }
      return 0;

  }