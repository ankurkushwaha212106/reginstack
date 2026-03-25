#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,1,9,5,7};
    int n = arr.size();
      int index = -1;
      int largest = INT_MIN;
      int second_largest = INT_MIN;
      for(int i=0;i<n;i++)
      {
        if(arr[i] > largest)
        {
        second_largest = largest;
        largest = arr[i];
        }
      else if(arr[i] > second_largest && arr[i] != largest)
      {
        second_largest = arr[i];
        index = i;
      }
    }
      cout<<"second_largest"<<second_largest<<endl;
      cout<<"index of second_largest"<<index<<endl;
      return 0;
}