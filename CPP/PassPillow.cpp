#include <iostream>
using namespace std;

int passpillow(int no,int time)
{
  int pass=(time)/(no-1);
  int nt=time%(no-1);

  if(pass%2==0)
    return 1+nt;
  else 
    return no-nt;
}

int main()
{
  int no, time;

  cout << "Enter total people" << endl;
  cin >> no;

  cout << "Enter total Time" << endl;
  cin >> time;

  cout<<passpillow(no,time)<<endl;
  return 0;
}