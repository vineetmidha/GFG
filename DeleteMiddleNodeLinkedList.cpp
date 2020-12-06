// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/0/?track=dsa-workshop-1-linkedlist&batchId=308


// Deletes middle of linked list and returns head of the modified list
Node * deleteMid(Node* head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = head;
    
    while (fast && fast->next){
        prev = slow;
        
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // cout << slow->data << " " << prev->data << endl; 
    
    prev->next = slow->next;
    delete slow;
    
    return head;
}
