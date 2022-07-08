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
    //Write your code here
    int val = getIthNode(head, i);
    if (val != -1)
    {
        cout << val << endl;
    }
}
