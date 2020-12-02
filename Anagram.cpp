// https://practice.geeksforgeeks.org/problems/anagram/1/?track=dsa-workshop-1-arrays&batchId=308#

bool isAnagram(string a, string b){
    
    map<char, int> mp;
    
    for (int i=0; i<a.size(); i++){
        mp[a[i]]++;
    }
    
    for (int i=0; i<b.size(); i++){
        if (mp.find(b[i]) != mp.end()){
            mp[b[i]]--;
        } else {
            mp[b[i]]++;
        }
    }
    
    for (auto i: mp){
        if (i.second!=0){
            return false;
        }
    }    
    
    return true;
}

