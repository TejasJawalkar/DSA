#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> nums, int target)
{
  vector<int> result;
  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = 0; j < nums.size(); j++)
    {
      if (nums[i] + nums[j] == target)
      {
        result[0] = nums[i];
        result[1] = nums[j];
      }
    }
  }
  return result;
}

int main()
{
  vector<int> arr, result;
  int limit, target;

  system("cls");

  cout << "\nTwo Sum Problem Implementation\n Enter array limit \n Target Value\n"
       << endl;
  cin >> limit;
  cin >> target;

  cout << "\nEnter Array Elements\n"
       << endl;
  arr.resize(limit);
  for (int i = 0; i < limit; i++)
  {
    cin >> arr[i];
  }

  result = TwoSum(arr, target);
  for (int i = 0; i < result.size(); i++)
  {
    cout << "|" << result[i] << "|";
  }
}