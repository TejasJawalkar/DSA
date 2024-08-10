#include <iostream>
using namespace std;

class Node
{
public:
  int value;
  Node *Next;
};

Node *Start = NULL, *NewN = NULL, *Temp = NULL;

class SinglyLinkedList
{
public:
  int Insert_Beg()
  {
    try
    {
      int value;
      system("CLS");
      cout << "Insert Begin" << endl;
      cout << "Enter Node Value" << endl;
      cin >> value;

      NewN = new Node();
      NewN->value = value;
      if (Start == NULL)
      {
        NewN->Next = NULL;
        Start = NewN;
      }
      else
      {
        NewN->Next = Start;
        Start = NewN;
      }
    }
    catch (exception e)
    {
      throw e;
    }
    return 1;
  }

  int Insert_End()
  {
    try
    {
      int value, ch;
      Temp = Start;
      if (Temp == NULL)
      {
        cout << "Linked List is Empty" << endl;
        return 0;
      }
      cout << "Enter the node value" << endl;
      cin >> value;

      NewN = new Node();
      NewN->value = value;

      while (Temp->Next != NULL)
      {
        Temp = Temp->Next;
      }
      Temp->Next = NewN;
      NewN->Next = NULL;

      return 1;
    }
    catch (exception e)
    {
      throw e;
    }
  }

  int Show()
  {
    system("CLS");
    cout << "View Linked In" << endl;
    Temp = Start;
    while (Temp != NULL)
    {
      cout << Temp->value << "->";
      Temp = Temp->Next;
    }
    cout<<endl;
    return 1;
  }
};

int main()
{
  int ch;
  SinglyLinkedList N;
  do
  {
    cout << "Select Operation " << "1. Add at Begening" << "2. Add at End" << "3. Show" << " 4. Exit" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
      N.Insert_Beg();
      break;
    case 2:
      N.Insert_End();
      break;
    case 3:
      N.Show();
      break;
    case 4:
      system("CLS");
      exit(0);
    default:
      cout << "Wrong Operation..." << endl;
      break;
    }
  } while (ch <= 3);

  return 0;
}