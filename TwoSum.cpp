// https://practice.geeksforgeeks.org/problems/key-pair1554/0/?track=dsa-workshop-1-hashing&batchId=308#

bool keypair(vector<int> a, int n, int x)
{
    map<int, int> hash;
    
    for (int i=0; i<n; i++){
        int target = x - a[i];
        
        if (hash.find(target) == hash.end()){
            hash[a[i]] = i;
        } else {
            return true;
        }
    }
    
    return false;
}

