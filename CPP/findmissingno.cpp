#include<iostream>
#include<vector>
using namespace std;

//formula = n*(n+1)/2

int findno(vector<int> arr,int no)
{
  
  int e_no=no*(no+1)/2;
  
  int a_no=0;

  for (int i =0; i <no; i++)
  {
    a_no+=arr[i];
  }

  return e_no-a_no;
}

int main()
{
  vector<int> array;
  int limit=0;
  system("cls");
  cout<<"Enter array limit"<<endl;cin>>limit;cout<<endl;

  array.resize(limit-1);
  for (int i = 0; i <limit-1; i++)
  {
    cin>>array[i];
  }
  int M_no=findno(array,array.size());
  if(M_no==0){cout<<"No Missing Found";}
  else{cout<<"Missing no is "<<M_no;}
  cout<<endl;

  return 0;
}
