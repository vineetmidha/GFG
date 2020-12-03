// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/0/?track=dsa-workshop-1-search-sort&batchId=308

vector<int> findUnion(int a1[], int a2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    
    vector<int> result;
    
    int i=0; 
    int j=0;
    
    while (i < n && j < m){
        if (a1[i] < a2[j]){
                if (a1[i] != a1[i-1])
                    result.push_back(a1[i]);
                i++;
        } else if (a2[j] < a1[i]){
            if (a2[j] != a2[j-1])
                result.push_back(a2[j]);
            j++;
        } else {
            if (a1[i] != a1[i-1])
                result.push_back(a1[i]);
            i++;
            j++;
        }
    }
        
    while (i < n){
        if (a1[i] != a1[i-1])
            result.push_back(a1[i]);
        i++;
    }

    while (j < m){
        if (a2[j] != a2[j-1])
            result.push_back(a2[j]);
        j++;
    }
    
    return result;
}
    
