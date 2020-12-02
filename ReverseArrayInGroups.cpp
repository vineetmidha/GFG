// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?track=dsa-workshop-1-arrays&batchId=308#

void reverseArray(vector<long long>&a, int start, int end){
    while (start < end){
        int t = a[start];
        a[start] = a[end];
        a[end] = t;

        start++;
        end--;
    }
}
void reverseInGroups(vector<long long>& a, int n, int k){
    for (int start=0; start < n; start+=k){
        int end = start + k - 1;

        if (end >= n) 
            end = n - 1;

        reverseArray(a, start, end);
    }
}

/*
Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}

Output: 3 2 1 5 4

Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.

*/
