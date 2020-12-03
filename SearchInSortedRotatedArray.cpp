// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/0/?track=dsa-workshop-1-search-sort&batchId=308#

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


