// https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/0/?track=dsa-workshop-1-bit-magic&batchId=308#

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    if (m == n) return -1;
    
    int pos = 0;
    
    int x = (m ^ n);

    while (x > 0){
        
        if ((x & 1) != 0)
            return pos+1;
        
        pos++;
        x >>= 1;
    }
    
    return -1;
}

