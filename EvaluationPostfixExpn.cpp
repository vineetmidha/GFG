// https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/0/?track=dsa-workshop-1-stack&batchId=308#

bool isOperator(char opr){
    switch (opr){
        case '+':
        case '-':
        case '*':
        case '/': return true;
    }
    return false;
}

int evaluate(char opr, int op1, int op2){
    switch (opr){
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
    }
}

int evaluatePostfix(string &s)
{
    stack<int> mystack;
    
    int result = 0;
    
    for (int i=0; i<s.size(); i++){
        if (isdigit(s[i]))
            mystack.push(s[i]-'0');
        else if (isOperator(s[i])){
            int op2 = mystack.top();
            mystack.pop();
            int op1 = mystack.top();
            mystack.pop();
            
            result = evaluate (s[i], op1, op2);
            mystack.push(result);
        }
    }
    
    return mystack.top();
}
