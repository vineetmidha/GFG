// https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/0/?track=dsa-workshop-1-arrays&batchId=308#

int immediateSmaller(int a[], int n, int x)
{
    
    int diff = 10000;  // as per constraint given
    int closest = -1;
    
    for (int i=0; i<n; i++){
        if (a[i] < x){
            if (x - a[i] < diff){
                diff = x - a[i];
                closest = a[i];
            }
        }
    }
    
    return closest;
}

