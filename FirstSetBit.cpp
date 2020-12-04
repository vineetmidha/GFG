// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/0/?track=dsa-workshop-1-bit-magic&batchId=308

/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
unsigned int getFirstSetBit(int n){
    
    int mask = 1;
    int pos = 0;
    
    while (n > 0){
        if ((n & mask) != 0)
            return pos+1;
        
        pos++;
        n >>= 1;
    }
    
    return 0;
}

