// https://practice.geeksforgeeks.org/problems/print-linked-list-elements/0/?track=dsa-workshop-1-linkedlist&batchId=308

void display(Node *head)
{
  Node *temp = head;
  
  while (temp){
      cout << temp->data << " ";
      temp = temp->next;
  }
}
