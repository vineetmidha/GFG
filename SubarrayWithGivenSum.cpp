// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?track=dsa-workshop-1-arrays&batchId=308#

vector<int> subarraySum(int a[], int n, int target){
    int current_sum = 0;
    int start = 0;
    int end = 0;

    vector<int> result;

    for (int i = 0; i < n; i++){
        current_sum += a[i];
        
        while (current_sum > target && start < i){
            current_sum -= a[start];
            start++;
        }
        
        if (current_sum == target){
            end = i;
        
            result.push_back(start+1);
            result.push_back(end+1);
            
            return result;
        } 
    }
    
    result.push_back(-1);
    return result;
}

