// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?track=dsa-workshop-1-strings&batchId=308#

string reverseWords(string s) 
{ 
    string result="";
    string temp="";
    
    for (int i=0; i<s.size(); i++){
        if (s[i]=='.'){
            result = "." + temp + result;
            temp = "";
        } else {
            temp += s[i];
        }
    }
    
    result = temp + result;
    
    return result;
} 

/*

Input:
S = i.like.this.program.very.much

Output: much.very.program.this.like.i

*/
