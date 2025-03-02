class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int index=0;
        for(int i=0; i<n; i++){
            if(val!=nums[i]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};