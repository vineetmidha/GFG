// https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/0/?track=dsa-workshop-1-linkedlist&batchId=308#

// Delete without head pointer

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted

void deleteNode(Node *node)
{
   Node *temp = node->next;
   
   node->data = node->next->data;
   
   node->next = node->next->next;
   
   delete temp;
}
