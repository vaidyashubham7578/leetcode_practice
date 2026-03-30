class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        // int st=0, end=n-1;
        // while(st<=end){
        //     int mid=st+(end-st)/2;
        //     if(nums[st]==tar){

        //     }else if(nums[st]<tar){
        //         end=mid-1;
        //     }else{
        //         st=mid+1;
        //     }
        // }

        for(int i=0; i<n; i++){
            if(nums[i]==tar){
                first=i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(nums[i]==tar){
                last=i;
                break;
            }
        }

        return {first, last};
        
    }
};