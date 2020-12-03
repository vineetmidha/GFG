// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/0/?track=dsa-workshop-1-arrays&batchId=308

#define ll long long

int equilibriumPoint(long long a[], int n) {
    if (n==1) return 1;
    if (n==2) return -1;
    
    ll left_sum = a[0];
    ll right_sum = 0;

    for (int i=1; i<n; i++){
        right_sum += a[i];
    }

    
    for (int i=1; i<n; i++){
        right_sum -= a[i];
        //cout << left_sum << " " << a[i] << " " << right_sum << endl;
        if (left_sum == right_sum)
            return i+1;

        left_sum += a[i];
    }        
    
    return -1;
}

/*

Example 1:

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 

Example 2:

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).

*/
