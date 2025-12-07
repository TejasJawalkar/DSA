#include <iostream>
#include <stdlib.h>
using namespace std;

void patternTwo(int n)
{
  cout << "Pattern 2=\n\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  system("cls");

  int n = t;
  for (int i = 0; i < t; i++)
  {
    patternTwo(i);
  }

  return 0;
}