// https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1/?track=dsa-workshop-1-stack&batchId=308

char* reverse(char *s, int len)
{
    stack<char> mystack;
    
    for (int i=0; i<len; i++){
        mystack.push(s[i]);
    }
    
    int i=0;
    while (!mystack.empty()){
        s[i] = mystack.top();
        mystack.pop();
        i++;
    }
    
    return s;
}
