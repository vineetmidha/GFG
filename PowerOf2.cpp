// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/0/?track=dsa-workshop-1-bit-magic&batchId=308#


// Function to check power of two
bool isPowerofTwo(long long n){
    
    return ((n & (n-1))==0);
}

