class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n>k){
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin()+k);
            reverse(nums.begin()+k, nums.end());
            return ;
        }else if(k>n){
            reverse(nums.begin(), nums.end());
            int p=k-n;
            if(p>0 && p<n){
                // reverse(nums.begin()+p, nums.end());
                reverse(nums.begin(), nums.begin()+p);
                reverse(nums.begin()+p, nums.end());
                return;
            }
        }else{
            return;
        }
    }
};