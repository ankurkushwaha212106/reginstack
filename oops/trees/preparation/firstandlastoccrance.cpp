#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,3,3,4,5};
    int n = arr.size();
    int start = 0;
    int end  =n-1;
    int first = -1;
    int last = -1;
    int target;
    cin>>target;
    // first occurance
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
          first = mid;
          end = mid -1;
        }
       else if(arr[mid] < target)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
    }
    // last occurance
     start  =0;
     end  =n-1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
          last = mid;
         start = mid +1;
        }
      else  if(arr[mid] < target)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
    }
    cout<<"first occurance "<<first<<endl;
     cout<<"last occurance "<<last<<endl;
     return 0;
}