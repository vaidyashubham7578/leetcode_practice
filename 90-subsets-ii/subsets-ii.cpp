class Solution {
public:
    void getallsubsetsWithDup(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubsetsWithDup){
        if(i==nums.size()){
            allsubsetsWithDup.push_back({ans});
            return;
        }

        // include
        ans.push_back(nums[i]);
        getallsubsetsWithDup(nums, ans, i+1, allsubsetsWithDup);

        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;

        // exclude
        getallsubsetsWithDup(nums, ans, idx, allsubsetsWithDup);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubsetsWithDup;
        vector<int>ans;

        getallsubsetsWithDup(nums, ans, 0, allsubsetsWithDup);
        return allsubsetsWithDup;
    }
};