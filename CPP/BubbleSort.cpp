#include <iostream>
#include <vector>
#include<stdlib>
using namespace std;

class BSorting
{
public:
  vector<int> BSort;
  int maxsize, temp, sorted;

public:
  int SortArray()
  {
    for (int i = 0; i < maxsize - 1; i++)
    {
      sorted = 0;
      for (int j = 0; j < maxsize - i - 1; j++)
      {
        if (BSort[j] > BSort[j + 1])
        {
          temp = BSort[j];
          BSort[j] = BSort[j + 1];
          BSort[j + 1] = temp;
          
          sorted = 1;
        }
      }
      // printing array
      cout<<"\n\nArray in Pass"<< i<<endl;
      for (int k = 0; k < maxsize; k++)
      {
        cout<<"|"<<BSort[k]<<"|";
      }
      cout<<endl;
      if (sorted == 0)
      {
        break;
      }
    }
    return 0;
  }

  int showarray()
  {
    for (int j = 0; j <= maxsize - 1; j++)
    {
      cout << "|" << BSort[j] << "|";
    }
    return 0;
  }
};

int main()
{
  BSorting b;
  int limit;
  system("cls");
  cout << "Enter size of array..." << endl;
  cin >> limit;
  b.maxsize = limit;
  b.BSort.resize(b.maxsize - 1);
  cout << "\n\nEnter Array Element" << endl;
  for (int i = 0; i <= b.maxsize - 1; i++)
  {
    cin >> b.BSort[i];
  }
  cout << "\n\nBefore Sorting Array" << endl;
  b.showarray();
  b.SortArray();
  cout << "\n\nAfter Sorting Array" << endl;
  b.showarray();
  cout << "\n";
  return 0;
}
