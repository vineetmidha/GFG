
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0/?track=dsa-workshop-1-arrays&batchId=308

int maxSubarraySum(int a[], int n){
    
    int current_sum = 0;
    int max_sum = 0;
    
    for (int i = 0; i < n; i++){
        if (current_sum >= 0)
            current_sum += a[i];
        else
            current_sum = a[i];
        
        max_sum = max(current_sum, max_sum);
    }
    
    return max_sum;
}

/*

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
 

Example 2:

Input:
N = 4
arr[] = {-1,-2,-3,-4}
Output: -1
Explanation: Max subarray sum is -1 
of element (-1)

*/
