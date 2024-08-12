#include <iostream>
#include <vector>
using namespace std;

class Queue
{
public:
  vector<int> QueueData;
  int maxsize;

public:
  int push()
  {
    int value;
    system("CLS");
    if(QueueData.size()==maxsize)
    {
      cout<<"Quee Limit Exceeded"<<endl;
      return 0;
    }
    cout<<"Enter the value"<<endl;
    cin>>value;
    QueueData.push_back(value);
    return 1;
  }

  int pop()
  {
    int value;
    system("CLS");
    if(QueueData.empty())
    {
      cout<<"Cannot Remove from the empty Queue"<<endl;
      return 0;
    }
    value=QueueData.front();
    cout<<value<<" Is Removed from Queue";
    QueueData.erase(QueueData.begin());
    value=0;
  }

  int show()
  {
    system("ClS");
    if(QueueData.empty())
    {
      cout<<"Cannot Show from the empty Queue"<<endl;
      return 0;
    }
    cout<<"Queue Data="<<endl;
    for(int i : QueueData)
    {
      cout<<i<<endl;
    }
    cout<<endl;
  }
};



int main()
{
  int ch, limit;
  Queue Q;

  cout << "\nEnter the limit of array\n"<< endl;
  cin >> limit;
  Q.maxsize=limit;
  do
  {
    cout<<"\nSelect Operations.....\n"<<endl;
    cout<<"1. Push " <<"2. Pop "<<"3. Show "<<"4. Exit"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
      Q.push();
      break;
      case 2:
      Q.pop();
      break;
    case 3:
      Q.show();
      break; 
    case 4:
      system("CLS");
      exit(0);
      break;
    default:
      cout << "Invalid Operations....." << endl;
      break;
    }
  } while (ch <= 4);
  return 1;
}