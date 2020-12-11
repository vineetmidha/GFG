// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=dsa-workshop-1-arrays&batchId=308#

vector<int> leaders(int a[], int n){
    
    vector<int> result;
    
    result.push_back(a[n-1]);

    if (n==1) return result;
    
    for (int i=n-2; i>=0; i--){
        if (a[i] >= result.back()){
            result.push_back(a[i]);
        }
    }
    
    reverse(result.begin(), result.begin()+result.size());
    
    return result;
}

