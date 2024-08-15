#include <iostream>
#include <vector>
using namespace std;
int i, j, k;

class mergesort
{
public:
  vector<int> sorted, Arr1, Arr2;

public:
  void mrgsort(vector<int>& arr, int p, int r);
  void mergearray(vector<int>& arr, int p, int m, int r);
  void showarray(int limit);
  void getarray(int limit);
};

void mergesort::mrgsort(vector<int>& arr, int p, int r)
{
  if (p < r)
  {
    int m = p + (r - p) / 2;
    mrgsort(arr, p,m);
    mrgsort(arr, m + 1, r);
    mergearray(arr, p, m, r);
  }
}

void mergesort::mergearray(vector<int>& arr, int p, int m, int r)
{
  int n1, n2;

  n1 = m - p + 1;
  n2 = r - m;

  Arr1.resize(n1);
  Arr2.resize(n2);

  for (i = 0; i < n1; i++)
  {
    Arr1[i] = arr[p + i];
  }

  for (j = 0; j < n2; j++)
  {
    Arr2[j] = arr[m + 1 + j];
  }

  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2)
  {
    if (Arr1[i] <= Arr2[j])
    {
      arr[k] = Arr1[i];
      i++;
    }
    else
    {
      arr[k] = Arr2[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    arr[k] = Arr1[i];
    k++, i++;
  }

  while (j < n2)
  {
    arr[k] = Arr2[j];
    k++, j++;
  }
}

void mergesort::showarray(int limit)
{
  for(i=0;i<limit;i++)
  {
    cout << "|" << sorted[i] << "|";
  }
  cout << endl;
}

void mergesort::getarray(int limit)
{
  for (i = 0; i < limit; i++)
  {
    cin >> sorted[i];
  }
}

int main()
{
  int limit;
  mergesort msort;

  system("CLS");

  cout << "Enter Limit of Array" << endl;
  cin >> limit;
  cout << endl;

  msort.sorted.resize(limit);

  cout << "Enter Array Elements..." << endl;
  msort.getarray(limit );

  cout << "Array Before Sorting.." << endl;
  msort.showarray(limit);

  msort.mrgsort(msort.sorted, 0, limit-1);

  cout << "Array After Sorting.." << endl;
  msort.showarray(limit );

  cout << endl;

  return 0;
}
