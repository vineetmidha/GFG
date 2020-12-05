// https://practice.geeksforgeeks.org/problems/check-for-binary/0/?track=dsa-workshop-1-strings&batchId=308#

//Return 1 if true, else return 0 if not true
int isBinary(char *str)
{
    for (int i=0; str[i]; i++){
        if (str[i] != '0' && str[i] != '1')
            return 0;
    }
    return 1;
}

