#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern5(int n)
{
  cout << "Pattern 5=\n\n";
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
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
  int n;
  system("cls");
  cin >> t;
  cin >> n;

  for (int i = 0; i < t; i++)
  {
    pattern5(n);
    n += 1;
  }
  cout << "";

  return 0;
}