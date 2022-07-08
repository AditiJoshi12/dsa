#include<iostream>
#include<llds.h>

using namespace std;

int findNode(Node *head, int n)
{
    int index = 0;         
    
	Node * temp = head;
    
	while(temp!=NULL)
    {
		if(temp->data == n)
        {			
			return index;               
		}
        
		temp = temp->next;
		index++;
	}	
	return -1;                  
}

void printIthNode(Node *head, int i)
{
    int val = getIthNode(head, i);
    if (val != -1)
    {
        cout << val << endl;
    }
}

Node *takeinput()
{
    LinkedList ll = new LinkedList();
	int data;
	cin >> data;
	while (data > INT_MIN)
	{
		cin >> data;
        ll.push(data);
	}
	return ll.head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}
