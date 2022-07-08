#include<iostream>
#include<llds.h>

using namespace std;

Node* insertNode(Node *head, int i, int data) 
{
    if(head == NULL)
    {
        return NULL;
    }
    
    if(i == 0)
    {
        Node* temp = new Node(data);
        temp->next = head;
        return temp;
    }
    
    if(i == 1)
    {
        Node* temp = new Node(data);
        temp->next = head->next;
        head->next = temp;
        return head;
    }
    
    Node* curr = insertNode(head->next, i-1, data);
    
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

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}
