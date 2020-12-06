// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1/?track=dsa-workshop-1-stack&batchId=308#

bool ispar(string s)
{   
    stack<char> mystack;
    
    for (int i=0; i<s.size(); i++){
        char bracket = s[i];
        if (bracket=='(' || bracket=='[' || bracket=='{')
            mystack.push(bracket);
        else 
        {
            if (mystack.empty()) return false;
            
            char opening = mystack.top();
            mystack.pop();
            
            if (bracket==')' && opening!='(' 
                || bracket=='}' && opening!='{'
                || bracket==']' && opening!='[')
                    return false;
        }
    }

    return mystack.empty();
}

