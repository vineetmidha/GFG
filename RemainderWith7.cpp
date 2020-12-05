
// https://practice.geeksforgeeks.org/problems/remainder-with-7/0/?track=dsa-workshop-1-strings&batchId=308#

int remainderWith7(string n)
{
    int x = 0;
    for (int i=0; i<n.size(); i++){
        int digit = n[i] - '0';
        x = (x%7 * 10%7)%7;
        x = x + digit;
    }
    return x%7;
}

