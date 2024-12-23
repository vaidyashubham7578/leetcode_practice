class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // int counts0=0, counts1=0, counts2=0;

        // for(int i=0; i<n; i++){
        //     if(nums[i]==0) counts0++;
        //     else if(nums[i]==1) counts1++;
        //     else counts2++;
        // }

        // int index=0;
        // for(int i=0; i<counts0; i++){
        //     nums[index++]=0;
        // }
        // for(int i=0; i<counts1; i++){
        //     nums[index++]=1;
        // }
        // for(int i=0; i<counts2; i++){
        //     nums[index++]=2;
        // }


        int low=0, mid=0, high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                mid++; low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }

    }
};