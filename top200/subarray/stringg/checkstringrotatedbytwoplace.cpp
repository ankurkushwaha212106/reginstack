#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
     int n = s.size();
    string ans = "";
    int k ;
    cin>>k;
   for(int i= k;i<n;i++)
   {
    k = k % n;
   ans.push_back(s[i]);
   }
 for(int i=0;i<k;i++)
 {
    ans.push_back(s[i]);
 }
    cout<<ans;
 
 return 0;

}

