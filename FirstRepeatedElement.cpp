// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/0/?track=dsa-workshop-1-arrays&batchId=308#

int firstRepeated(int v[], int n) {
    set<int> s;
    int min = -1;
    for (int i=n-1; i>=0; i--){
        if (s.find(v[i]) != s.end()){
            min = i;
        } else {
            s.insert(v[i]);
        }
    }
    
    if (min != -1)
        return min+1;
    else
        return min;
}

/*

Example 1:

Input:
N = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

Example 2:

Input:
N = 4
arr[] = {1, 2, 3, 4}
Output: -1
Explanation: 
All elements appear only once so 
answer is -1.

*/
