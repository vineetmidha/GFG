// https://practice.geeksforgeeks.org/problems/peak-element/0/?track=dsa-workshop-1-search-sort&batchId=308#

int findPeakUtil(int arr[], int low, 
                 int high, int n) 
{ 
    // Find index of middle element 
    // (low + high)/2 
    int mid = low + (high - low) / 2; 
  
    // Compare middle element with its 
    // neighbours (if neighbours exist) 
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  
        (mid == n - 1 || arr[mid + 1] <= arr[mid])) 
        return mid; 
  
    // If middle element is not peak and its 
    // left neighbour is greater than it, 
    // then left half must have a peak element 
    else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        return findPeakUtil(arr, low, (mid - 1), n); 
  
    // If middle element is not peak and its 
    // right neighbour is greater than it, 
    // then right half must have a peak element 
    else
        return findPeakUtil( 
            arr, (mid + 1), high, n); 
}

int peakElement(int a[], int n)
{
    return findPeakUtil(a,0,n-1,n);
}

int peakElement1(int a[], int n)  // TLE
{
    if (n==1) return a[0];
    
    if (a[n-1] > a[n-2])
        return n-1;
        
    int start = 0;
    int end = n-1;
    int mid;

    while (start <= end){
        mid = (start + end)/2;
        
        if (mid > 0 && mid < n-1){
            if (a[mid] > a[mid-1] && a[mid] < a[mid+1]){
                return mid;
            } else if (a[mid-1] > a[mid]){
                end = mid - 1;
            } else if (a[mid+1] > a[mid]){
                start = mid + 1;
            } else if (mid == 0){
                if (a[0] > a[1])
                    return 0;
                else
                    return 1;
            } else if (mid == n-1){
                if (a[n-1] > a[n-2])
                    return n-1;
                else
                    return n-2;
            }
        }
    }

    return -1;    
}
