#include<iostream>
#include<llds.h>

using namespace std;

int getIthNode(Node* head, int i)
{
    Node* current = head;  
        
    int count = 0;  
    while (current != NULL)  
    {  
        if (count == i)  
            return(current->data);  
        count++;  
        current = current->next;  
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
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}
