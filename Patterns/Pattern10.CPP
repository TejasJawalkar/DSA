#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern10(int n)
{
  cout << "Pattern 5=\n\n";
  for (int row = n; row > 0; row--)
  {
    for (int space = 0; space < n - row + 1; space++)
    {

      cout << " ";
    }
    for (int star = 0; star < 2 * row - 1; star++)
    {
      cout << "*";
    }
    for (int space = 0; space < n - row + 1; space++)
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
    pattern10(n);
    n += 1;
  }
  return 0;
}