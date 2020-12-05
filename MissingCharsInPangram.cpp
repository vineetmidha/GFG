// https://practice.geeksforgeeks.org/problems/missing-characters-in-panagram/1/?track=dsa-workshop-1-strings&batchId=308#

string missingPanagram(string str){
    int hashmap[26] = {0};
    
    for (auto ch : str){
        ch = tolower(ch);
        hashmap[ch - 'a']++;
    }

    string missing = "";

    for (int i = 0 ; i < 26; i++){
        if (hashmap[i] == 0){
            missing += char(i + 'a');
        }
    }
    
    if (missing.size()==0)
        return "-1";
    else
        return missing;
}
