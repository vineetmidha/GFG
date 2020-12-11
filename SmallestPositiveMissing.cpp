// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/0/?track=dsa-workshop-1-arrays&batchId=308#

// TC: O(n)
// SC: O(n)

// Logic of SC: O(1) - could not understand

int firstMissingPositive(vector<int>& a) {
    if (a.size()==0) return 1;

    set<int> hash;

    int max_element = 0;

    bool one = false;

    for (auto i: a){
        if (i==1) 
            one = true;

        if (i > 0)  {
            hash.insert(i);
            max_element = max(i, max_element);                
        }
    }

    if (!one)
        return 1;

    int i;
    for (i=2; i<=max_element; i++){
        if (hash.find(i) == hash.end()) return i;
    }

    return i;
}
