// https://practice.geeksforgeeks.org/problems/multiply-the-matrices-1587115620/0/?track=dsa-workshop-1-matrix&batchId=308#

vector<vector<int> > multiplyMatrix( const vector<vector<int> >& a, const vector<vector<int> >& b)
{
    if (a[0].size() != b.size())
    {
        vector<vector<int>> c;
        return c;
    }

    int rows = a.size();        // rows of matrix a
    int cols = b[0].size();     //  cols of matrix b

    vector<vector<int>> c (rows);

    for (int i=0; i<rows; i++){
        c[i] = vector<int>(cols);
    }

    for (int i = 0; i < rows; i++){

        for (int j = 0; j < cols; j++){

            c[i][j] = 0;

            for (int k = 0; k < b.size(); k++){
                c[i][j] += a[i][k] * b[k][j];
            }

        }
    }

    return c;
}

