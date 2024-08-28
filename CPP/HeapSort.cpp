#include<iostream>
#include<vector>
using namespace std;

class HeapSorting
{
  public:
    vector<int> array;
    int limit;

  public:
    int getarray();
    int showarray();
    int maxhepifysort(vector<int>& arr,int no,int i);
    int heapsort(vector<int>& arr,int no);
    int swap(int& a,int& b);
};

int HeapSorting:: getarray()
{
  for (int i = 0; i < limit; i++)
  {
    cin>>array[i];
  }
  cout<<endl;
}

int HeapSorting:: showarray()
{
  cout<<"|";
  for (int i = 0; i < limit; i++)
  {
    cout<<array[i]<<"|";
  }
  cout<<endl;
}

int HeapSorting::heapsort(vector<int>& arr,int no)
{
  for (int i = no/2-1; i >=0; i--)
  {
    maxhepifysort(arr,no,i);
  }

  for (int i = no-1; i >=0; i--)
  {
    swap(arr[0],arr[i]);
    maxhepifysort(arr,no,0);
  }
  
  return 0;
}
int HeapSorting:: maxhepifysort(vector<int>& arr,int no, int i)
{
  int largest=i;
  int l=2*i+1;
  int r=2*i+2;

  while (l<no && arr[l]>arr[largest])
  {
    largest=l;
  }

  while (r<no && arr[r]>arr[largest])
  {
    largest=r;
  }

  if(largest!=i)
  {
    swap(arr[i],arr[largest]);
    maxhepifysort(arr,no,largest);
  }

  return 0;
}

int HeapSorting:: swap(int& a,int& b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;

  return 0;
}

int main()
{
  HeapSorting heapsort;
  system("cls");

  cout<<"\nEnter Limit of Array..\n"<<endl;
  cin>>heapsort.limit;

  heapsort.array.resize(heapsort.limit);

  cout<<"\nEnter Array Elements\n"<<endl;
  heapsort.getarray();

  cout<<"\nArray Elements Before Sorting...\n"<<endl;
  heapsort.showarray();
  
  // for (int i = heapsort.array.size()/2-1; i >=0; i--)
  // {
  //   heapsort.maxhepifysort(heapsort.array,heapsort.limit,i);
  // } 

  heapsort.heapsort(heapsort.array,heapsort.limit);

  cout<<"\nArray Elements after Sorting...\n"<<endl;
  heapsort.showarray();

  return 0;
}