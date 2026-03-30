#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin , s);
     vector<string>lower(26,0),upper(26,0);
     for(int i=0;i<s.size();i++)
     {
        if(s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else{
            upper[s[i] - 'A']++;
        }

     }
     

}