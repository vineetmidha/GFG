// https://practice.geeksforgeeks.org/problems/adding-two-matrices3512/0/?track=dsa-workshop-1-matrix&batchId=308

vector<vector<int>> sumMatrix(const vector<vector<int>>&a, const vector<vector<int>>&b)
{
    if (a.size() != b.size() || a[0].size() != b[0].size())
    {
        vector<vector<int>> c;
        return c;
    }

    vector<vector<int>> c(a);

    for (int i = 0; i < c.size(); i++){
        vector<int>row = a[i];
        for (int j = 0; j < row.size(); j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    return c;
}
