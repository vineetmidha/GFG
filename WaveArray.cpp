// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/0/?track=dsa-workshop-1-arrays&batchId=308

void convertToWave(int *a, int n){
    
    for (int i=0; i<n-1; i++){
        if (i%2==0){
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    
}

/*

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
 

Example 2:

Input:
N = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after 
sorting it in wave form are 
4 2 8 7 10 9.

*/
