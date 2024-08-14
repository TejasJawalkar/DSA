#include <iostream>
using namespace std;
class operations
{
public:
  virtual int addtotree() = 0;
  virtual int showtree(int order) = 0;
};
class TreeNode
{
public:
  TreeNode *Right;
  int value;
  TreeNode *Left;
};

TreeNode *Root = nullptr, *NewN = NULL, *Temp = nullptr, *Curr = nullptr;

class binarytree : public operations
{
public:
  int addtotree() override
  {
    int value;
    NewN = new TreeNode();
    cout << "\nEnter Value to Insert\n"
         << endl;
    cin >> value;
    NewN->value = value;
    NewN->Right = nullptr;
    NewN->Left = nullptr;
    if (!NewN->value)
    {
      cout << "Memory Allocation Failed..." << endl;
      return 0;
    }
    if (Root == nullptr)
    {
      Root = NewN;
    }
    else
    {
      Temp = Root;
      while (Temp != nullptr)
      {
        Curr = Temp;
        if (value < Temp->value)
        {
          Temp = Temp->Left;
        }
        else
        {
          Temp = Temp->Right;
        }
      }
      if (value < Curr->value)
      {
        Curr->Left = NewN;
      }
      else
      {
        Curr->Right = NewN;
      }
    }
    return 0;
  }

  int showtree(int order) override
  {
    system("CLS");
    if (order == 1)
    {
      inorder(Root);
    }
    else if (order == 2)
    {
      preorder(Root);
    }
    else if (order == 3)
    {
      postorder(Root);
    }
    return 0;
  }

  int inorder(TreeNode *Node){
    if(Node!=nullptr)
    {
      inorder(Node->Left);
      cout<<Node->value;
      inorder(Node->Right);
    }
    return 0;
  }

  int preorder(TreeNode *Node){
    if(Node!=nullptr)
    {
      cout<<Node->value;
      inorder(Node->Left);
      inorder(Node->Right);
    }
    return 0;
  }

  int postorder(TreeNode *Node){
    if(Node!=nullptr)
    {
      inorder(Node->Left);
      inorder(Node->Right);
      cout<<Node->value;
    }
    return 0;
  }
};

int main()
{
  int ch;
  binarytree Btree;
  system("CLS");
  do
  {
    cout << "Select the Operation...\n"
         << "1. Add to Tree " << "2. Show Tree InOrder" << "3. Show Tree PreOrder" << "4. Show Tree PostOrder" << "5. Exit" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
      Btree.addtotree();
      break;
    case 2:
      Btree.showtree(1);
      break;
    case 3:
      Btree.showtree(2);
      break;
    case 4:
      Btree.showtree(3);
      break;
    case 5:
      system("CLS");
      exit(0);
    default:
      cout << "Wrong Operations..." << endl;
      break;
    }
  } while (ch <= 5);
  return 0;
}