class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(maxi<mp[nums[i]]) maxi=mp[nums[i]];
        }
        int msum=0;
        for(auto i: mp) 
            if(i.second==maxi) 
                msum+=i.second;
        return msum;
    }
};