// https://practice.geeksforgeeks.org/problems/longest-substring-without-repeating-characters/0/?track=dsa-workshop-1-strings&batchId=308#

// TC: O(n^2)

int SubsequenceLength (string s) 
{
    int c=0;
    int max_length=0;
    
    string substring = "";
    
    map<char, int> hashmap;
    
    for (int i=0; i<s.size(); i++){
        // if seen earlier
        if (hashmap[s[i]] != 0){
            int cur_length = substring.size();
            max_length = max(cur_length, max_length);
            
            int index = hashmap[s[i]] - 1;
            
            // Remove entries from hashmap
            for (int j=0; j<=index; j++){
                hashmap[s[j]] = 0;
            }
            
            // cout << substring << " " << index << " " << s[i] << endl;
            if (index >= substring.size())
                substring = "";
            else
                substring = substring.substr(index+1);
        }
        substring += s[i];
        hashmap[s[i]] = i+1;
    }
    
    return max_length > substring.size() ? max_length : substring.size();
}
