class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int size =nums.size();
        // for(int i=0; i<size-1; i++){
        //     for(int j=i+1; j<size; j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i, j};
        //         }
        //     }
            
        // }
        // return {};

        int n=nums.size();
        unordered_map<int, int>m;
        // int st=0, end=n-1;
        vector<int>ans;
        for(int i=0; i<n; i++){
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first]=i;

        }
        return ans;
    }
};