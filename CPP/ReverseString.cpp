
#include<iostream>
#include<vector>  
#include<algorithm> //for reverse function

using namespace std;

int main()
{
  string str;
  int limit;
  system("CLS");
  cout<<"Enter String"<<endl;
  getline(cin,str);

  string strrevs=str;
  reverse(strrevs.begin(),strrevs.end());
  cout<<"String Reverse with String Reverse Function\t"<<strrevs<<endl;

  cout<<"\nString Reverse with Vector"<<endl;
  vector<char> strvec(str.begin(),str.end());
  for (int i = strvec.size()-1; i >=0; i--)
  {
    cout<<str[i];
  }
  cout<<endl;


  return 0;
}