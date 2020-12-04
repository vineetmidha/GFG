// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1/?track=dsa-workshop-1-bit-magic&batchId=308

// Function to check if Kth bit is set or not

bool checkKthBit(int n, int k){
    
    int mask = (1<<k);
    
    return (n & mask);
    
}
