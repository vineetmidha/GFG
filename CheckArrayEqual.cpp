// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/0/?track=dsa-workshop-1-hashing&batchId=308#


bool check(vector<ll> arr, vector<ll> brr, int n) {
    
    if (arr.size() != brr.size()) return false;
    
    map<ll, ll> hash;
    
    for (ll i=0; i<n; i++){
        hash[arr[i]]++;
    }
    
    for (ll i=0; i<n; i++){
        hash[brr[i]]--;
    }
    
    for (auto i: hash){
        if (i.second != 0){
            return false;
        }
    }
    
    return true;
    
}

