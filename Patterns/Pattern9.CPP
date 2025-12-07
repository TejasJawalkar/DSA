#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern9(int n)
{
  cout << "Pattern 9=\n\n";

  for (int row = n; row > 0; row--)
  {
    for (int star = 0; star < row; star++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int row = 2; row <= n; row++)
  {
    for (int star = 0; star < row; star++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int t, n;
  system("cls");
  cin >> t;
  cin >> n;

  for (int i = 0; i < t; i++)
  {
    pattern9(n);
    n++;
  }

  return 0;
}