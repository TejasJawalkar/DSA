#include <iostream>
using namespace std;

class Node
{
public:
  int value;
  Node *Next;
};

Node *Start, *NewN, *Temp = NULL;

class SinglyLinkedList
{
public:
  int Insert_Beg()
  {
    system("CLS");
    cout << "Insert Begin" << endl;
    return 1;
  }

  int Show()
  {
    system("CLS");
    cout << "show" << endl;
    return 1;
  }
};

int main()
{
  int ch;
  SinglyLinkedList N;
  do
  {
    cout << "Select Operation " << "1. Add at Begening" << "2. Show" << " 3. Exit" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
      N.Insert_Beg();
      break;
    case 2:
      N.Show();
      break;
    case 3:
      system("CLS");
      exit(0);
    default:
      cout << "Wrong Operation..." << endl;
      break;
    }
  } while (ch <= 3);

  return 0;
}