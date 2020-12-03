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

// Method-2 : GFG

static void UnionArray(int arr1[], 
                       int arr2[]) 
{ 
    // Taking max element present in either array 
    int m = arr1[arr1.length - 1]; 
    int n = arr2[arr2.length - 1]; 

    int ans = 0; 

    if (m > n) { 
        ans = m; 
    } 
    else
        ans = n; 

    // Finding elements from 1st array 
    // (non duplicates only). Using 
    // another array for storing union 
    // elements of both arrays 
    // Assuming max element present 
    // in array is not more than 10^7 
    int newtable[] = new int[ans + 1]; 

    // First element is always 
    // present in final answer 
    System.out.print(arr1[0] + " "); 

    // Incrementing the First element's count 
    // in it's corresponding index in newtable 
    ++newtable[arr1[0]]; 

    // Starting traversing the first 
    // array from 1st index till last 
    for (int i = 1; i < arr1.length; i++) { 
        // Checking whether current element 
        // is not equal to it's previous element 
        if (arr1[i] != arr1[i - 1]) { 
            System.out.print(arr1[i] + " "); 
            ++newtable[arr1[i]]; 
        } 
    } 

    // Finding only non common 
    // elements from 2nd array 
    for (int j = 0; j < arr2.length; j++) { 
        // By checking whether it's already 
        // present in newtable or not 
        if (newtable[arr2[j]] == 0) { 
            System.out.print(arr2[j] + " "); 
            ++newtable[arr2[j]]; 
        } 
    } 
