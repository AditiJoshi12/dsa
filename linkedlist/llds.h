#include <bits/stdc++.h>

using namespace std;

class Node
{
  public: 
  int data;
  Node* next;
 
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }
}

class LinkedList
{
  public:
  Node* head;
  int size;
  
  LinkedList()
  {
    head = NULL;
    size = 0;
  }
  
  void push(int val;)
  {
    if(size == 0)
    {
      head = new Node(val); 
    }
    else
    {
      Node* node = new Node(val);
      node->next = head;
      head = node;      
    }
    size++;
  }
  
  int length(LinkedList ll)
  {
    return ll.size;
  }
}
