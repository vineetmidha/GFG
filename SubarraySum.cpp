

// https://www.geeksforgeeks.org/find-subarray-with-given-sum/

void subArraySum(vector<int> a, int target){

    int cur_sum = 0;
    int start = 0;

    for (int end = 0; end < a.size(); end++){
        cur_sum += a[end];

        if (cur_sum == target){
            cout << "Found";
            return;
        }

        while (cur_sum > target && start < end) {
            cur_sum -= a[start];
            start++;
        }
    }

    if (cur_sum == target)  // check if last element is the target sum
        cout << "Found";
    else
        cout << "Not found";
}

/*

Corner case -> last element is the target sum

a = [1,2,5]
sum = 5

*/
