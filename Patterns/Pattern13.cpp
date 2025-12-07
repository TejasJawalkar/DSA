#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern13(int n)
{
  cout << "Pattern 13=\n\n";
  for (int row = 0; row < n; row++)
  {
    for (int space = 0; space < row; space++)
    {
      cout << " ";
    }
    for (int star = 0; star < 2 * n - (2 * row + 1); star++)
    {
      cout << "*";
    }
    for (int star = 0; star < row; star++)
    {
      cout << " ";
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
    pattern13(n);
    n += 1;
  }
  cout << "";

  return 0;
}