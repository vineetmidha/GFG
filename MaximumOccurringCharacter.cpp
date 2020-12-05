// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/0/?track=dsa-workshop-1-strings&batchId=308#
 
// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str)
{
    int hashmap[26] = {0};
    char result = tolower(str[0]);
    hashmap[result-'a'] = 1;
    int max = 1;
    
    for (int i=1; str[i]; i++){
        char ch = tolower(str[i]);
        
        hashmap[ch - 'a']++;
        
        if (hashmap[ch - 'a'] > max){
            max = hashmap[ch - 'a'];
            result = ch;
        } else if (hashmap[ch - 'a'] == max){
            result = (result < ch ? result : ch);
        }
    }
    
    return result;
}
