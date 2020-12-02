// https://practice.geeksforgeeks.org/problems/who-has-the-majority/1/?track=dsa-workshop-1-arrays&batchId=308#

int majorityWins(int a[], int n, int x,int y)
{
    int c1 = 0;
    int c2 = 0;
    
    for (int i=0; i<n; i++){
        c1 += a[i] == x;
        c2 += a[i] == y;
    }
    
    if (c1 > c2)
        return x;
    else if (c2 > c1)
        return y;
    else
        return x < y ? x : y;
}

/*

Example 1:

Input:
N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5

Output: 4

Explanation: 
frequency of 4 is 4.
frequency of 5 is 1.
 
Example 2:

Input:
N = 8
arr[] = {1,2,3,4,5,6,7,8}
x = 1, y = 7

Output: 1

Explanation: 
frequency of 1 is 1.
frequency of 7 is 1.
Since 1 < 7, return 1.

*/
