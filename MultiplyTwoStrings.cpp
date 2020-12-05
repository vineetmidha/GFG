// https://practice.geeksforgeeks.org/problems/multiply-two-strings/0/?track=dsa-workshop-1-strings&batchId=308#
// multiply two strings representing very large numbers

string multiplyStrings(string s1, string s2) {
    // If either of the number is empty, result is zero
    
    if (s1.size()==0 || s2.size()==0)
        return "0";
    
    // If either of the number is zero, result is zero
    if (s1.size()==1 && s1[0] == '0' || s2.size()==1 && s2[0] == '0')
        return "0";

    // Decide sign of the answer
    string sign="";
    if (s1[0]=='-' && s2[0]=='-'){
        sign = "";        
    } else if (s1[0]=='-' || s2[0]=='-'){
        sign = "-";
    }
    
    // Remove minus sign
    if (s1[0]=='-'){
        s1 = s1.substr(1);
    }
    if (s2[0]=='-'){
        s2 = s2.substr(1);
    }
    
    int carry;
    
    vector<int> answer (s1.size()+s2.size(),0);

    int index = 0;
    int vi;
    
    for (int i=s1.size()-1; i>=0; i--){
        carry = 0;
        int n1 = s1[i] - '0';
        vi = index;
        
        for (int j=s2.size()-1; j>=0; j--){
            int n2 = s2[j] - '0';
         
            int small_ans = n1 * n2 + carry + answer[vi];
            
            carry = small_ans / 10;
            small_ans %= 10;
                
            answer[vi] = small_ans;
            
            vi++;
        }

        // Store balance carry, if any
        
        if (carry > 0)
            answer[vi] = carry;
        
        index++;
    }
    
    // ignore '0's from the right 
    int i = answer.size() - 1; 
    while (i>=0 && answer[i] == 0) 
        i--; 
    
    // generate the result string 
    string final_result = ""; 

    while (i >= 0) 
        final_result += to_string(answer[i--]); 
  
    return sign + final_result;
}

