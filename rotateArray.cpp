// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=dsa-workshop-1-arrays&batchId=308

// TC: O(n)
// SC: O(1)

void reverse(int a[], int start, int end){
    
    while (start < end){
        int t = a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--;
    }
}
void rotateArr(int arr[], int d, int n){
    if (d == n) return;
    
    // reverse d elements
    reverse(arr, 0, d-1);
    
    // reverse n-d elements
    reverse(arr, d, n-1);
    
    // reverse n elements
    reverse(arr, 0, n-1);
}
