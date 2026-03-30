#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip;
    getline(cin,ip);
    //vector<ip>ans();
    string ans = "";
    for(int i=0;i<ip.size();i++)
    {
        if(ip[i] == ' . ')
        {
            ans += "[ . ]";
        }
        else
        {
            ans += ip[i];
        }
    }
    cout<<ans;
    return 0;
}