// https://practice.geeksforgeeks.org/problems/sort-a-stack/1/?track=dsa-workshop-1-stack&batchId=308#

/* The below method sorts the stack s in descending order
you are required to complete the below method */

void SortedStack :: sort()
{
   stack<int> helper;
   
   while (!s.empty()){
       int s_top = s.top();
       s.pop();
       
       while (!helper.empty() && s_top < helper.top()){
           int x = helper.top();
           helper.pop();
           s.push(x);
       }
       
       helper.push(s_top);
   }
   
   s = helper;
}
