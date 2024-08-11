#include <iostream>
using namespace std;

class Node
{
public:
  int value;
  Node *Next;
};

Node *Start = NULL, *NewN = NULL, *Temp = NULL, *Curr = NULL;

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

  int Insert_Bet()
  {
    int value, aftervalue;
    try
    {
      if (Start == NULL)
      {
        cout << "Linked List is Empty...." << endl;
        return 0;
      }
      cout << "Enter the Node Value" << endl;
      cin >> value;
      cout << "Enter Value to Search and add new after it....";
      cin >> aftervalue;
      Temp = Start;
      NewN = new Node();
      NewN->value = value;
      while (Temp->value < aftervalue && Temp->Next != NULL)
      {
        Curr = Temp;
        Temp = Temp->Next;
      }
      Curr->Next = NewN;
      NewN->Next = Temp;
    }
    catch (exception e)
    {
      throw e;
    }
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

  int Delete_Beg()
  {
    try
    {
      system("CLS");
      Temp = Start;
      if (Temp == NULL)
      {
        cout << "Linked List is Null" << endl;
        return 0;
      }
      Start = Start->Next;
      cout << Temp->value << " is Removed from List" << endl;
      free(Temp);
    }
    catch (exception e)
    {
      throw e;
    }
  }

  int Delete_End()
  {
    try
    {
      system("CLS");
      Temp = Start;
      if (Temp == NULL)
      {
        cout << "Linked List is Null" << endl;
        return 0;
      }
      while (Temp->Next != NULL)
      {
        Curr = Temp;
        Temp = Temp->Next;
      }
      Curr->Next = NULL;
      cout << Temp->value << " is Removed from List" << endl;
      free(Temp);
    }
    catch (exception e)
    {
      throw e;
    }
  }

  int Delete_Bet()
  {
    int value;
    try
    {
      system("CLS");
      Temp = Start;
      if (Temp == NULL)
      {
        cout << "Linked List is Null" << endl;
        return 0;
      }
      
      cout << Temp->value << " is Removed from List" << endl;
      free(Temp);
    }
    catch (exception e)
    {
      throw e;
    }
  }

  int Show()
  {
    try
    {
      system("CLS");
      Temp = Start;
      if (Temp == NULL)
      {
        cout << "Linked List is Null" << endl;
        return 0;
      }

      cout << "Linked List Values" << endl;
      while (Temp != NULL)
      {
        if (Temp->Next == NULL)
        {
          cout << Temp->value << "->/";
        }
        else
        {
          cout << Temp->value << "->";
        }
        Temp = Temp->Next;
      }
      cout << endl;
      return 1;
    }
    catch (exception e)
    {
      throw e;
    }
  }
};

int main()
{
  int ch;
  SinglyLinkedList N;
  do
  {
    cout << "Select Operation " << "1. Add at Start" << "2. Add in Between" << "3. Add at End" << "4. Delete At Start" << "5. Search & Delete" << "6. Delete At End" << "7. Show" << " 8. Exit" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
      N.Insert_Beg();
      break;
    case 2:
      N.Insert_Bet();
      break;
    case 3:
      N.Insert_End();
      break;
    case 4:
      N.Delete_Beg();
      break;
    case 5:
      N.Delete_Beg();
      break;
    case 6:
      N.Delete_End();
      break;
    case 7:
      N.Show();
      break;
    case 8:
      system("CLS");
      exit(0);
    default:
      cout << "Wrong Operation..." << endl;
      break;
    }
  } while (ch <= 8);

  return 0;
}