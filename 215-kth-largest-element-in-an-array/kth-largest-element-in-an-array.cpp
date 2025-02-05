class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(i==n-k){
                return nums[n-k];
            }
            
        }
        return -1;
    }
};