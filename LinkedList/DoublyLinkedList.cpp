#include <iostream>
using namespace std;

class Node
{
public:
  Node *Prev;
  int Data;
  Node *Next;
};

Node *Start, *Curr, *NewN, *Temp,*Trail = NULL;

class DoublyLinkedList
{
public:
  int add_beg();
  int add_bet();
  int add_end();
  int del_beg();
  int del_bet();
  int del_end();
  int show();
};

int DoublyLinkedList::add_beg()
{
  int value;
  NewN = new Node();
  system("CLS");
  cout << "Enter the Node Value" << endl;
  cin >> value;

  NewN->Data = value;
  if (Start == NULL)
  {
    NewN->Prev = NULL;
    NewN->Next = NULL;
  }
  else
  {
    Start->Prev = NewN;
    NewN->Prev = NULL;
    NewN->Next = Start;
  }
  Start = NewN;
  return 0;
}

int DoublyLinkedList::add_bet() 
{
  int value,no;
  Temp=Start;
  system("cls");
  if(Temp==NULL)
  {
    cout<<"List is Empty"<<endl;
    return 0; 
  }
  cout<<"Enter Node Value"<<endl;
  cin>>value;

  cout<<"Enter Existing Node Value to save Node after it..."<<endl;
  cin>>no;

  NewN=new Node();

  NewN->Data=value;
  while (Temp->Next!=NULL && Temp->Data!=no)
  {
    Curr=Temp;
    Temp=Temp->Next;
  }
  NewN->Prev=Temp->Prev;
  NewN->Next=Curr->Next;
  Curr->Next=NewN;
  Temp->Prev=NewN;
  return 0; 
}

int DoublyLinkedList::add_end()
{
  int value;
  Temp = Start;
  NewN = new Node();
  system("CLS");
  cout << "\nEnter Node Value" << endl;
  cin >> value;

  if (Temp == NULL)
  {
    cout << "List is Empty..." << endl;
    return 0;
  }
  NewN->Data = value;

  while (Temp->Next != NULL)
  {
    Temp = Temp->Next;
  }
  NewN->Next = NULL;
  NewN->Prev = Temp;
  Temp->Next = NewN;
  return 0;
}

int DoublyLinkedList::del_beg() 
{
  Temp=Start;
  if(Temp==NULL)
  {
    cout<<"List is Null"<<endl;
    return 0;
  } 
  Curr=Temp->Next;
  Curr->Prev=NULL;
  Start=Curr;
  cout<<Temp->Data <<" Deleted from List"<<endl;
  delete Temp;
  return 0; 
}

int DoublyLinkedList::del_bet() 
{
  int value;
  Temp=Start;
  system("cls");
  cout<<"Enter the value from list to delete.."<<endl; 
  cin>>value;

  if(Temp==NULL)
  {
    cout<<"List is Empty.."<<endl;
    return 0;
  }

  while(Temp->Data!=value)
  {
    Curr=Temp;
    Temp=Temp->Next;
    Trail=Temp->Next;
  }

  if(Temp==NULL)
  {
    cout<<value<<" value not found in list"<<endl;
    return 0;
  }

  Curr->Next=Temp->Next;
  Trail->Prev=Temp->Prev;
  cout<<Temp->Data<<" Is delete From List"<<endl;
  delete Temp;

  return 0; 
}

int DoublyLinkedList::del_end() 
{
  Temp=Start;
  system("CLS");
  if (Temp==NULL)
  {
    cout<<"List is Empty.."<<endl;
    return 0;
  }
  
  while (Temp->Next!=NULL)
  {
    Curr=Temp;
    Temp=Temp->Next;
  }
  Curr->Next=NULL;
  cout<<Temp->Data <<" Is Deleted"<<endl;
  delete Temp;
  
  return 0; 
}

int DoublyLinkedList::show()
{
  Temp = Start;
  system("cls");
  if (Temp == NULL)
  {
    system("CLS");
    cout << "Linked List is Empty" << endl;
    cout << endl;
  }
  cout << "Linked List" << endl;
  while (Temp != NULL)
  {
    cout << "|" << Temp->Prev << "<-" << Temp->Data << "->" << Temp->Next << "|" << "<->";
    Temp = Temp->Next;
  }
  cout << endl;
  return 0;
}

int main()
{
  int ch;
  DoublyLinkedList DLS;
  system("CLS");
  do
  {
    cout<<"\nSelect Operation\n";
    cout<<"1.Add_at_start\t2.Add_in_between\t3.Add_at_end\t4.Del_at_start\n5.Del_at_Between\t6.Del_at_End\t7.Show\t8.Exit\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
      DLS.add_beg();
      break;
    case 2:
      DLS.add_bet();
      break;
    case 3:
      DLS.add_end();
      break;
    case 4:
      DLS.del_beg();
      break;
    case 5:
      DLS.del_bet();
      break;
    case 6:
      DLS.del_end();
      break;
    case 7:
      DLS.show();
      break;
    case 8:
      system("CLS");
      exit(0);
      break;
    default:
      cout << "Wrong Operation....";
      break;
    }
  } while (ch <= 7);
}