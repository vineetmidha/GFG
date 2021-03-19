
// https://practice.geeksforgeeks.org/contest-problem/c891eefbea496143e8a8196686ebe8f5169cc40a/1/

int Aterpsgame(int Arr[], int n) {
    int num = Arr[n-1];
    int i=n-2;

    while(i>=0 && Arr[i]==num)
        i--;

    return i+2;        
}
