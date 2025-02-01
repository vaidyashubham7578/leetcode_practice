class Solution {
public:
    // Helper
    int BinarySearch(vector<int>& nums, int tar, int st, int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==tar) return mid;
            else if(nums[mid]<=tar){
                return BinarySearch(nums, tar, mid+1, end);
            }else{
                return BinarySearch(nums, tar, st, mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int tar) {
        return BinarySearch(nums, tar, 0, nums.size()-1);
    }
};