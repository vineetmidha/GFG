// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/0/?track=dsa-workshop-1-linkedlist&batchId=308#

bool detectLoop(Node* head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = head;
    
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
            return true;
    }
    
    return false;
    
}

