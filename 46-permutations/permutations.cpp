class Solution {
public:
    void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }

        for(int i=idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]);
            getPerms(nums, idx+1, ans); // every stage

            swap(nums[idx], nums[i]);  // Backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getPerms(nums, 0, ans);
        return ans;
    }
};