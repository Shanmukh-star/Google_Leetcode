#define pub push_back
class Solution{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long int sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        vector<vector<int>> v1;
        for(auto i : s)
          {
            v1.pub(i);
          }
        return v1;
    }
};
