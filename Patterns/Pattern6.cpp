#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern6(int n)
{
  cout << "Pattern 6=\n\n";
  for (int i = n; i > 0; i--)
  {
    for (int j = 1; j < i; j++)
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
    pattern6(n);
    n += 4;
  }
  cout << "";

  return 0;
}