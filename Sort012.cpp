// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/0/?track=dsa-workshop-1-search-sort&batchId=308

void sort012(int a[], int n)
{
    int low=0, mid=0, high=n-1;
    
    for (int i = 0; i < n; i++)
    {
        if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
    }
}
