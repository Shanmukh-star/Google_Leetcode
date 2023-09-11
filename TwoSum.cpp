#define pub push_back
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<pair<int,int>> num;
        int p=0;
        for(auto i : nums)
        {
            num.pub({i,p});
            p++;
        }
        sort(num.begin(),num.end());
        int k=0;
        int l=nums.size()-1;
        vector<int> v;
        while(k<l)
        {
            if(num[k].first+num[l].first==target)
            {
                v.pub(num[k].second);
                v.pub(num[l].second);
                break;
            }
            else if(num[k].first+num[l].first<target)
            {
                k++;
            }
            else
            {
                l--;
            }
        }
        return v;
    }
};
