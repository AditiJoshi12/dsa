#include<iostream>
#include<llds.h>

using namespace std;

void deletenode(Node** head, int pos)
{
    
    if (*head == NULL)
    {
    	return;
    }
   
    Node* temp = *head;
    if (pos == 0)
    {
        *head = temp->next; 
        free(temp);               
        return;
    }
    
    for (int i=0; temp!=NULL && i<pos-1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    
    Node *next = temp->next->next;
    delete(temp->next);  
    temp->next = next; 
}

Node *deleteNodeRec(Node *head, int pos) 
{
    deletenode(&head, pos);
    return head;
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
	while (data != INT_MIN)
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
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
}
