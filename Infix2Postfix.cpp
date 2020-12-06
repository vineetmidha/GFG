// https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/0/?track=dsa-workshop-1-stack&batchId=308#

bool isOperator(char symbol){
    switch (symbol){
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': return true;
    }
    return false;
}

int get_priority(char opr){
    int priority;
    
    switch (opr){
        case '+': 
        case '-': priority = 1; break;
        case '*': 
        case '/': priority = 2; break;
        case '^': priority = 3; break;
        case '(': priority = 4; break;
        case ')': priority = 4; break;
    }
    return priority;
}

string infixToPostfix(string s)
{
    s = "(" + s + ")";
    stack<char> mystack;
    string postfix = "";
    
    for (int i=0; i<s.size(); i++){
        char symbol = s[i];
        
        if (symbol == '(')
            mystack.push(symbol);
        else if (isalnum(symbol))
            postfix += symbol;
        else if (isOperator(symbol)){
            char tos = mystack.top();
            
            if (get_priority(symbol) > get_priority(tos))
                mystack.push(symbol);
            else {
                while (!mystack.empty() && 
                    get_priority(symbol) <= get_priority(mystack.top()) && 
                    mystack.top()!='('){
                    
                    char opr = mystack.top();
                    postfix += opr;
                    mystack.pop();
                }
                mystack.push(symbol);
            }
        }
        else if (symbol == ')'){
            while (!mystack.empty() && mystack.top() != '('){
                char tos = mystack.top();
                postfix += tos;
                mystack.pop();
            }
            mystack.pop();
        }
    }
    return postfix;
}
