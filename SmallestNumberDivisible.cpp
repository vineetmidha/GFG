// Smallest Number Divisible by first N numbers

// https://practice.geeksforgeeks.org/problems/smallest-divisible-number/0/?track=dsa-workshop-1-mathematics&batchId=308#

long long gcd (long long a, long long b){
    if (a%b==0) return b;

    return gcd(b, a%b);
}
long long getSmallestDivNum(long long n){
    long long ans = 1;

    for (long long i=1; i<=n; i++){
        ans = (ans * i) / gcd(ans, i);    
    }

    return ans;
}
