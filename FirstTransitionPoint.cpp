// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/0/?track=dsa-workshop-1-arrays&batchId=308#

int transitionPoint(int a[], int n) {
    
    for (int i=0; i<n; i++){
        if (a[i] == 1)
            return i;
    }
    return -1;
}

/*

Example 1:

Input:
N = 5
arr[] = {0,0,0,1,1}

Output: 3

Explanation: index 3 is the transition 
point where 1 begins.

Example 2:

Input:
N = 4
arr[] = {0,0,0,0}

Output: -1

Explanation: Since, there is no "1",
the answer is -1.

*/
