class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int>s;
        for(int i=0; i<nums.size()-1; i++){
            int first=nums[i];
            if(s.find(first)!=s.end()){
                return true;
            }
            if(nums[i]==nums[i+1]) return true;
            // s[first]=i;
            s[first]=nums[i];
            // s[nums[i]]++;
        }
        return false;
    }
};