// https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/0/?track=dsa-workshop-1-linkedlist&batchId=308

int count(struct node* head, int search_for)
{
    struct node * temp = head;
    
    int c = 0;
    
    while (temp){
        if (temp->data == search_for)
            c++;
        temp = temp->next;
    }
    
    return c;
}
