class Solution {
public:
    int findfirst(vector<int>& nums, int tar){
        int n=nums.size();
        int st=0, end=n-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==tar){
                ans=mid;
                end=mid-1;
            }else if(nums[mid]<tar){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }

    int findlast(vector<int>&nums, int tar){
        int n=nums.size();
        int st=0, end=n-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==tar){
                ans=mid;
                st=mid+1;
            }else if(nums[mid]<tar){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int tar) {
        return {findfirst(nums, tar), findlast(nums, tar)};
        
    }
};