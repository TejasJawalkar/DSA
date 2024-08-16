#include <iostream>
using namespace std;
int value, i, j, k;

class OperationsList
{
public:
  virtual int InsertintoListOne() = 0;
  virtual int ShowfromListOne() = 0;
  virtual int InsertintoListTwo() = 0;
  virtual int ShowfromListTwo() = 0;
  virtual int MergeList() = 0;
  virtual int ShowfromListThree() = 0;
};

class ListOne
{
public:
  int Data;
  ListOne *Next;
} *NewN1 = NULL, *Temp1 = NULL, *Curr1 = NULL, *Start1 = NULL;

class ListTwo
{
public:
  int Data;
  ListTwo *Next;
} *NewN2 = NULL, *Temp2 = NULL, *Curr2 = NULL, *Start2 = NULL;

class ListMerge
{
public:
  int Data;
  ListMerge *Next;
} *NewN3 = NULL, *Temp3 = NULL, *Curr3 = NULL, *Start3 = NULL;

class LinkedListData : public OperationsList
{
public:
  int InsertintoListOne() override
  {
    try
    {
      int value;
      system("CLS");
      cout << "Enter Value to Save Into First List" << endl;
      cin >> value;
      
      NewN1 = new ListOne();
      NewN1->Data = value;
      NewN1->Next = Start1;
      Start1 = NewN1;
    }
    catch (exception e)
    {
      throw e;
    }
    return 0;
  }

  int ShowfromListOne() override
  {
    try
    {
      Temp1=Start1;
      system("CLS");
      if(Temp1==NULL)
      {
        cout<<"Linked List 1 is Empty "<<endl;
        return 0;
      }
      cout<<"Linked List 1\n";
      while (Temp1!=NULL)
      {
        cout<<Temp1->Data<<"->";
        Temp1=Temp1->Next;
      }
    }
    catch (exception e)
    {
      throw e;
    }
    return 0;
  }

  int InsertintoListTwo() override
  {
    try
    {
      int value;
      system("CLS");
      cout << "Enter Value to Save Into Second List" << endl;
      cin >> value;
      cout<<value<<endl;
      NewN2 = new ListTwo();
      NewN2->Data = value;
      NewN2->Next = Start2;
      Start2 = NewN2;
    }
    catch (exception e)
    {
      throw e;
    }
    return 0;
  }

  int ShowfromListTwo() override
  {
    try
    {
      Temp2=Start2;
      system("CLS");
      if(Temp2==NULL)
      {
        cout<<"Linked List 2 is Empty "<<endl;
        return 0;
      }
      cout<<"Linked List 2\n";
      while (Temp2!=NULL)
      {
        cout<<Temp2->Data<<"->";
        Temp2=Temp2->Next;
      }
      cout<<endl;
    }
    catch (exception e)
    {
      throw e;
    }
    return 0;
  }
  
  void assigndata(ListMerge*& Start,int data)
  {
    NewN3=new ListMerge();
    NewN3->Data=data;
    NewN3->Next=Start;
    Start3=NewN3;
  }

  int MergeList() override
  {
    try
    {
      Temp1=Start1;
      Temp2=Start2;

      // while (Temp1!=NULL && Temp2!=NULL)
      // {
      //   if(Temp1->Data>Temp2->Data)
      //   {
      //     assigndata(Start3,Temp1->Data);
      //     Temp1=Temp1->Next;
      //   }
      //   else
      //   {
      //     assigndata(Start3,Temp2->Data);
      //     Temp2=Temp2->Next;
      //   }
      // }

      while (Temp1!=NULL)
      {
        assigndata(Start3,Temp1->Data);
        Temp1=Temp1->Next;
      }
      while (Temp2!=NULL)
      {
        assigndata(Start3,Temp2->Data);
        Temp2=Temp2->Next;
      } 
    }
    catch (exception e)
    {
      throw e;
    }
    
  }

  int ShowfromListThree() override
  {
    try
    {
      Temp3=Start3;
      if(Temp3==NULL)
      {
        cout<<"Linked List 1 is Empty "<<endl;
        return 0;
      }
      cout<<"Merged Linked List"<<endl;
      while ((Temp3!=NULL))
      {
        cout<<Temp3->Data<<"->";
        Temp3=Temp3->Next;
      }
    }
    catch (exception e)
    {
      throw e;
    }
    return 0;
  }
};

int main()
{
  int ch;
  LinkedListData LData;
  system("CLS");
  do
  {
    cout<<endl;
    cout << "Select Operation..." << endl;
    cout << "\n1.)Insert into List One"
         << "\n2.)Show from List Two"
         << "\n3.)Insert into List Two"
         << "\n4.)Show from List Two"
         << "\n5.)Merge List"
         << "\n6.)Show from List Two"
         << "\n7.)Exit"
         <<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:LData.InsertintoListOne();break;
    case 2:LData.ShowfromListOne();break;
    case 3:LData.InsertintoListTwo();break;
    case 4:LData.ShowfromListTwo();break;
    case 5:LData.MergeList(); break;
    case 6:LData.ShowfromListThree();break;
    case 7:system("CLS"); exit(0);break;
    default:cout<<"Wrong Operations..."<<endl; break;
    }
  } while (ch <= 7);
  return 0;
}