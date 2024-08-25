#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  string str1,str2;
  system("cls");
  getline(cin,str1);
  str2=str1;
  reverse(str2.begin(),str2.end());
  
  if(str1==str2)
  {
    cout<<"String is Palindrome"<<endl;
  }
  else
  {
    cout<<"String is not Palindrome"<<endl;
  }

  return 0;
}