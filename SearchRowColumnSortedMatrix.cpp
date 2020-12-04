// https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/0/?track=dsa-workshop-1-matrix&batchId=308#

bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    int row;

    for (int i = 0; i < n; i++)
    {
        if (x <= matrix[i][m-1]){
            row = i;
            break;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        if (x == matrix[row][i])
        {
            return true;
        }
    }
    
    return false;
}

