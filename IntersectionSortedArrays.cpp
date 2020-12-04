// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/0/?track=dsa-workshop-1-search-sort&batchId=308#

vector<int> printIntersection(int a[], int b[], int N, int M) 
{ 
    vector<int> result;

    int i=0, j=0;
    
    while (i < N && j < M)
    {
        if (a[i] == b[j])
        {
            if (result.empty() ||  a[i] != result.back())
            {
                result.push_back(a[i]);
            }
            i++;
            j++;
        } 
        else if (a[i] < b[j]) 
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    if (result.empty())
        result.push_back(-1);
        
    return result;
}
