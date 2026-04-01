class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        int j = n-1;
        int ans = 0;
        
        while(i<j)
        {
            int width = j-i;
           int height = min(arr[i],arr[j]);
            
           ans = max(width * height,ans);
           if(arr[i] < arr[j])
           {
                i++;
           }
           else
           j--;

        }
        return ans;
        
    }
};