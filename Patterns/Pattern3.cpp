#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern3(int n)
{
  cout << "Pattern 2=\n\n";
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main()
{
  int t;
  int n;
  system("cls");
  cin >> t;
  cin >> n;

  for (int i = 0; i < t; i++)
  {
    pattern3(t);
  }

  return 0;
}