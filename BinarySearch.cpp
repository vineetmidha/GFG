//  https://practice.geeksforgeeks.org/problems/binary-search-1587115620/0/?track=dsa-workshop-1-search-sort&batchId=308#

int binarysearch(int a[], int n, int k){
    int start = 0;
    int end = n;

    while (start <= end){
        int mid = (start+end) / 2;

        if (a[mid] == k) return mid;

        if (a[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

    
