#include <iostream>
#include <stdlib.h>
using namespace std;

void pattern4(int n)
{
  cout << "Pattern 4=\n\n";
  for (int i = 1; i <= n; i++)
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
  system("cls");
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    pattern4(t);
  }

  return 0;
}