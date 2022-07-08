#include <iostream.cpp>
#include <llds.h>

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


Node *deleteNode(Node *head, int pos)
{
    deletenode(&head, pos);
    return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
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
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}
