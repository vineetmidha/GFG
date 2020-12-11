// https://practice.geeksforgeeks.org/problems/max-distance-between-same-elements/1/?track=dsa-workshop-1-hashing&batchId=308#

int maxDistance(int a[], int n)
{
    map<int, int> hash;
    
    int max_distance = 0;
    
    for (int i=0; i<n; i++){
        if (hash.find(a[i]) == hash.end()){
            hash[a[i]] = i;
        } else {
            int distance = i - hash[a[i]];
            max_distance = max(distance, max_distance);
        }
    }
    
    return max_distance;
}

