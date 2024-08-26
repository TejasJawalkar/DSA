#include <iostream>
#include <vector>
using namespace std;

class QuickSort
{
public:
  vector<int> data;
  int limit;

public:
  int getArray(int limit); 
  int showarray(int limit);
  int quisort(int lb, int ub);
  int partition(int s, int e);
  int swap(int& a,int& b);
};

int QuickSort::getArray(int limit)
{
  for (int i = 0; i < limit; i++)
  {
    cin>>data[i];
  }
  cout<<endl;
  return 1;
}

int QuickSort::showarray(int limit)
{
  cout<<"|";
  for (int i = 0; i < limit; i++)
  {
    cout<<data[i]<<"|";
  }
  cout<<endl;
  cout<<endl;
  return 1;
}

int QuickSort::quisort(int lb,int ub)
{
  int loc;
  if(lb<ub)
  {
    loc=partition(lb,ub);
    quisort(lb,loc-1);
    quisort(loc+1,ub);
  }
  return 0;
}

int QuickSort::partition(int s, int e)
{
  int pivot,start,end;
  pivot=data[s];
  start=s;
  end=e;

  while (start<end)
  {
    while (data[start]<=pivot)
    {
      start++;
    }
    while (data[end]>pivot)
    {
      end--;
    }
    if(start<end)
    {
      swap(data[start],data[end]);
    }
  }
  swap(data[s],data[end]);
  return end;
}

int QuickSort::swap(int& a,int& b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  return 0;
}

int main()
{
  QuickSort qsort;
  system("cls");

  cout << "enter limit" << endl;
  cin >> qsort.limit;
  
  qsort.data.resize(qsort.limit);

  cout<<"Enter Array Elements..."<<endl;
  qsort.getArray(qsort.limit);

  cout<<"Array Before Sorting.."<<endl;
  qsort.showarray(qsort.limit);

  qsort.quisort(0,qsort.limit-1);
  
  cout<<"Array After Sorting.."<<endl;
  qsort.showarray(qsort.limit);

  return 0;
}