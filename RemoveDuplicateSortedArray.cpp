
//  https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1/?track=dsa-workshop-1-arrays&batchId=308#

int remove_duplicate(int a[],int n){
  int c=0;
  int left = 1;

  for (int i=1; i<n; i++){
      if (a[i] == a[i-1]){
          c++;
      } else {
          a[left++] = a[i];
      }
  }
  return n-c;
}

