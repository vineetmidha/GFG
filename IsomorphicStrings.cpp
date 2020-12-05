// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/0/?track=dsa-workshop-1-strings&batchId=308

bool isIsomorphic(string X, string Y)
{
    // if X and Y have different lengths, they cannot be Isomorphic
    if (X.length() != Y.length())
        return false;
 
    // use map to store mapping from characters of string X to string Y
    unordered_map<char, char> map;
 
    // use set to store pool of already mapped characters
    unordered_set<char> set;
 
    for (int i = 0; i < X.length(); i++)
    {
        char x = X[i], y = Y[i];
 
        // if x is seen before
        if (map.find(x) != map.end())
        {
            // return false if first occurrence of x is mapped to
            // different character
            if (map[x] != y)
                return false;
        }
 
        // if x is seen for the first time (i.e. it is not mapped yet)
        else
        {
            // return false if y is already mapped to some other char in X
            if (set.find(y) != set.end())
                return false;
 
            // map y to x and mark it mapped
            map[x] = y;
            set.insert(y);
        }
    }
 
    return true;
}
