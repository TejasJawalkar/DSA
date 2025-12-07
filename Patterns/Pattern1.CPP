#include <iostream>
using namespace std;

int patternOne(int n)
{
  cout << "Pattern 1=\n\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;

  return 0;
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
    patternOne(n);
  }

  return 0;
}