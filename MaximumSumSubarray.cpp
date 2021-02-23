
// https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/

int maximumSumSubarray(int k, vector<int> &a , int n){
    // n must be greater 
    
    if (n < k) 
    { 
       cout << "Invalid"; 
       return -1; 
    } 
    
    int cur_sum = 0;

    for (int i=0; i<k; i++){
        cur_sum += a[i];
    }

    int max_sum = cur_sum;

    for (int i=k; i<n; i++){
        cur_sum += (a[i] - a[i-k]);
        max_sum = max(cur_sum, max_sum);
    }

    return max_sum;
}

