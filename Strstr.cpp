// https://practice.geeksforgeeks.org/problems/implement-strstr/0/?track=dsa-workshop-1-strings&batchId=308#

/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     if (x.size() > s.size()) return -1;
     
     for (int i=0; i<=s.size()-x.size(); i++){
         if (x[0] != s[i]) continue;
         
        //  cout << s[i] << endl;
         
         if (s.size()-i < x.size()) continue;
         
         bool flag = true;
         
         for (int j=1; j<x.size(); j++){
             if (s[i+j] != x[j]){
                 flag = false;
                 break;
             }
         }
         
         if (flag) return i;
     }
     
     return -1;
}
