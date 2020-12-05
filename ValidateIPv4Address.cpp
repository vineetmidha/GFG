// https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/0/?track=dsa-workshop-1-strings&batchId=308#

/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
int isValid(string s) {
    if (s.size()==0) return 0;
    
    s += '.';
    
    string part = "";
    int c = 0;

    for (int i=0; i<s.size(); i++){
        if (s[i] == '.'){
            c += 1;
            
            // Invalid length
            if (part.size() == 0 || part.size() > 3)
                return 0;
            
            // Leading zeros
            if (part.size() > 1)
                if (part[0]=='0')
                    return 0;
            
            // Convert part address into integer
            stringstream ss(part);
            int code;
            ss >> code;
    
            // Invalid range
            if (code > 255)
                return 0;
                
            part = "";
        } else {
            if (!isdigit(s[i])) return 0;
            
            part += s[i];
        }
    }
    
    return c == 4;
}

/*

00.00.00.00 -> invalid
109.190.178.01 -> invalid
0.0.0.0 -> valid
201.255.232.232 ->valid
3333..333 -> invalid

*/
