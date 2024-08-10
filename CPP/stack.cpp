#include<iostream>
#include<vector>
using namespace std;

class stack{
  public:
    vector<int> stack;
    int maxsize;

  public:
    int push(){
      int value;
      system("CLS");
      if(stack.size()>maxsize)
      {
          cout<<"Stack is full...";
          return 0;
      }
      cout<<"Enter value to push"<<endl;
      cin>>value;
      stack.push_back(value);
      return 1;
    }

    int pop(){
      system("CLS");
      if(stack.size()<=0)
      {
        cout<<"No Items to pop"<<endl;
        return 0;
      }
      int value=stack.back();
      stack.pop_back();
      cout<<"Value is popped"<<value<<endl;
      return 1;
    }

    int show(){
      system("CLS");
      if(stack.size()<=0)
      {
        cout<<"No Items to show"<<endl;
        return 0;
      }
      cout<<"Stack Value"<<endl;
      for (int i = stack.size()-1; i >=0; i--)
      {
        cout<<"||"<<stack[i]<<"||"<<endl;
      }
      return 1;
    }
};


int main()
{
  int ch,limit=0;
  stack sc;

  cout<<"Enter array limit"<<endl;
  cin>>limit;

  sc.maxsize=limit;
  do{
    cout<<"Select the Operation...\n"<<"1. Push "<<"2. Pop "<<"3. Show "<<"4. Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
      case 1: sc.push(); break;
      case 2: sc.pop(); break;
      case 3: sc.show(); break;
      case 4: system("CLS"); exit(0); break;
      default:cout<<"\nWrong Operation.....\n"<<endl;
    }
  }while(ch<=4);

  return 0;
}