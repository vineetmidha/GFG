// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/0/?track=dsa-workshop-1-search-sort&batchId=308#

// Method-1

int Search(vector<int> v, int key) {
  int left = 0;
  int right = v.size() - 1;

  while (left <= right) {
    // Avoid overflow, same as M=(L+R)/2
    int mid = left + ((right - left) / 2);
    if (v[mid] == key) return mid;

    // the bottom half is sorted
    if (v[left] <= v[mid]) {
      if (v[left] <= key && key < v[mid])
        right = mid - 1;
      else
        left = mid + 1;
    }
    // the upper half is sorted
    else {
      if (v[mid] < key && key <= v[right])
        left = mid + 1;
      else
        right = mid - 1;
    }
  }
  return -1;
}

// Method-2

int findPivot(vector<int>&v){
    int left = 0;
    int right = v.size()-1;
    
    while (left <= right){
        int mid = (left+right)/2;
        
        if (v[mid] > v[mid + 1]) return mid;
        
        if (v[mid - 1] > v[mid]) return mid-1;

        if (v[mid] > v[0])
            left = mid + 1;
        else if (v[mid] < v[0])
            right = mid - 1;
        else
            cout << "mid at 0" << endl;
    }    
    
    return -1;
}

int Search(vector<int> v, int k) {
    int pivot = findPivot(v);
    
    int left, right;
    
    if (pivot == -1){
        left = 0;
        right = v.size()-1;
    } else {
        if (v[pivot] == k) return pivot;
    
        if (v[0] <= k){
            left = 0;
            right = pivot;
        } else {
            left = pivot + 1;
            right = v.size() - 1;
        }
    }

    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (v[mid] == k) return mid;
    
        if (v[mid] < k) 
            left = mid + 1;
        else
            right = mid - 1;
    }    
    
    return -1;    
}

