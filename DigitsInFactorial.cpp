// https://practice.geeksforgeeks.org/problems/digits-in-factorial/0/?track=dsa-workshop-1-mathematics&batchId=308

int digitsInFactorial(int n)
{
    if (n < 0) 
        return 0; 
  
    if (n <= 1) 
        return 1; 
  
    double digits = 0; 
    for (int i=2; i<=n; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
    
}
