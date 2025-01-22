class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // unordered_set<int>s;

        // for(int i=0; i<n; i++){
        //     if(s.find(nums[i])!=s.end()){
        //         return nums[i];
        //     }
        //     s.insert(nums[i]);
        // }
        // return -1;
 
    // Constant Space
        int slow=nums[0], fast=nums[0];
        do{
            slow=nums[slow]; //+1
            fast=nums[nums[fast]]; //=2
        }while(slow!=fast);

        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow]; //+1
            fast=nums[fast]; //+1
        }
        return slow;
    }

};