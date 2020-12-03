// https://practice.geeksforgeeks.org/problems/square-root/1/?track=dsa-workshop-1-search-sort&batchId=308

long long int floorSqrt(long long int n) 
{
    if (n == 1) return n;
    
	long long start = 1;
	long long end = n;
	long long ans;
	
	while (start <= end){
		long long mid = (start + end) / 2;
		
		if (mid*mid == n) 
			return mid;
			
		if (mid*mid < n){
			start = mid + 1;
			ans = mid;
		} else {
			end = mid - 1;
		}
	}
	
	return ans;
}
