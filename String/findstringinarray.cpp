#include <iostream>
#include <vector>
using namespace std;

int isstringmatch(string str1, string str2)
{
  int count = 0;
  for (int i; i < str1.length(); i++)
  {
    if (str1[i] == str2[i])
      count++;
  }
  return count;
}

string findStringInArray(vector<string> arr, string targetvalue)
{

  if (targetvalue == "")
    return "";

  int minvalue = targetvalue.length() + 1;

  for (string value : arr)
  {
    if (value.length() == targetvalue.length())
    {
      int res = isstringmatch(value, targetvalue);
      if (res < minvalue)
        return value;
    }
  }
  return "";
}

int main()
{
  vector<string> Arr;
  string result = "", targetString = "";
  int limit;
  system("cls");

  cout << "Enter array limit" << endl;
  cin >> limit;

  Arr.resize(limit);
  for (int i = 0; i < limit; i++)
  {
    cin >> Arr[i];
  }

  cout << "Enter Target string";
  cin >> targetString;

  result = findStringInArray(Arr, targetString);
  if (result != "")
  {
    cout << "" << result << endl;
  }
  else
  {
    cout << "No similar data or similar length of string data found....!";
  }
}