#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern8(int n)
{
  cout << "Pattern 8=\n\n";
  for (int row = 0; row < n; row++)
  {
    for (int star = 0; star < row; star++)
    {
      cout << "*";
    }

    cout << endl;
  }

  for (int row = n; row > 0; row--)
  {
    for (int star = 0; star < row; star++)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
}

int main()
{
  int t, n;
  system("cls");
  cin >> t;
  cin >> n;

  for (int i = 0; i < t; i++)
  {
    pattern8(n);
    n += 1;
  }
  cout << "";

  return 0;
}