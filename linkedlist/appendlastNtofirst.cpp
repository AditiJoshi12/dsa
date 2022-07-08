#include<iostream>
#include<llds.h>

using namespace std;

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    Node *temp = head, *t = head;   
    
    if(head == NULL)
    {
        return head;
    }
    
	int i = -n;
    
	while(temp->next != NULL)
    {		
		if(i>=0)
        {                           
			t = t->next;
		}
        
		temp = temp ->next;
        
		i++;
	}
	
	temp->next = head;                      
	
	head = t->next;                         
	
	t->next = NULL;     
    
	return head;
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
