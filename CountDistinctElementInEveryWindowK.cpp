// https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/0/?track=dsa-workshop-1-hashing&batchId=308#

vector <int> countDistinct (int a[], int n, int k)
{
    map <int, int> hash;
    vector<int> result;
    int start = 0;
    for (int i=0; i<n; i++){
        hash[a[i]]++;
        
        if (i >= k-1){
            result.push_back(hash.size());
            
            hash[a[start]]--;
            
            if (hash[a[start]] == 0)
                hash.erase(a[start]);
            
            start++;
        }
    }
    
    return result;
}

