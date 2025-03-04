class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
       int freq=0, ans=0;
       for(int i=0; i<n; i++){
        if(freq==0){
            ans=nums[i];
        }
        if(nums[i]==ans){
            freq++;
        }else{
            freq--;
        }
       }
       return ans;
    }
     
};