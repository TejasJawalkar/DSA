#include<iostream>
#include<vector>
using namespace std;
int temp;

class InsertionSort
{
public:
  vector<int> array;
  int limit;

public:
  int getarray(int limit); 
  int showarray(int limit); 
  int sortarray(vector<int>& arr,int limit);  
};

int InsertionSort::getarray(int limit)
{
  cout<<"\n";
  for (int i = 0; i <limit; i++)
  {
    cin>>array[i];
  }
  return 0;
}

int InsertionSort::showarray(int limit)
{
  for (int i = 0; i <limit; i++)
  {
    cout<<"|"<<array[i]<<"|";
  }
  return 0;
}

int InsertionSort::sortarray(vector<int>& arr, int limit)
{
  int j;
  for (int i = 1; i < limit; i++)
  {
    temp=arr[i];
    j=i-1;
    while (j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  return 0;
}

int main()
{
  InsertionSort srt;
  
  system("cls");

  cout<<"\nEnter limit for array\n"<<endl;
  cin>>srt.limit;
  
  srt.array.resize(srt.limit);

  cout<<"Enter array Elements";
  cout<<"\n";

  srt.getarray(srt.limit);

  cout<<endl;
  
  cout<<"\n";

  cout<<"Entered array before sorting"<<endl;
  srt.showarray(srt.limit);

  srt.sortarray(srt.array,srt.limit);
  
  cout<<"\n";
  
  cout<<"Entered array after sorting"<<endl;
  srt.showarray(srt.limit);
  
  return 0;
}