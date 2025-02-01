class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        set<int>s;
        for(int i=0; i<n; i++){
            // int first=nums[i];
            if(nums[i]!=i){
                return i;
            }

        }
        return n;
    }
};