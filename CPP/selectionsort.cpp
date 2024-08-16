#include<iostream>
#include<vector>
using namespace std;

int m,limit,i,j,k;

class selectionsort
{
  public:
    vector<int> sorting;
    int limit;

  public:
    int getarray();
    int viewArray();
    int sort();
    int swap(int *min,int *max);
};

int selectionsort::getarray()
{
   cout<<"Enter Array Elements"<<endl;
  for (i = 0; i < limit; i++)
  {
    cin>>sorting[i];
  }
  return 0;
}

int selectionsort:: viewArray()
{
  for (i = 0; i < limit; i++)
  {
    cout<<"|"<<sorting[i]<<"|";
  }
  cout<<endl;
  return 0;
}

int selectionsort::sort()
{
  for (i = 0; i < limit-1; i++)
  {
    m=i;
    for (j = i+1; j < limit; j++)
    {
      if(sorting[j]<sorting[m])
      {
        m=j;
      }
    }
    if(m!=i)
    {
      swap(&sorting[i],&sorting[m]);
    }   
  } 
  return 0;
}

int selectionsort::swap(int *min,int *max)
{
  int temp;
  temp=*min;
  *min=*max;
  *max=temp;
}

int main()
{
  selectionsort srt;
  system("cls");

  cout<<"Enter array limit"<<endl;
  cin>>srt.limit;
  srt.sorting.resize(srt.limit);

  srt.getarray();
  cout<<endl;
  system("cls");
  cout<<"Array Before Sorting \t";
  srt.viewArray();

  srt.sort();
  cout<<endl;
  cout<<"Array After Sorting \t";
  srt.viewArray();
}