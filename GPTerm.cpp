// https://practice.geeksforgeeks.org/problems/gp-term/0/?track=dsa-workshop-1-mathematics&batchId=308#

double termOfGP(int a,int b,int n)
{
    if (n==1) return (double) a;
    
    if (n==2) return (double) b;
    
    double r = (double) b/a;
    
    double term = a * pow(r,n-1);
    
    return term;
}

