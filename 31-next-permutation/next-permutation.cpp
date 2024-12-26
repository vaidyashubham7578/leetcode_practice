class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //  find pivot
        int pivot=-1;
        int n=nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(), nums.end());
            return ;
        }

        // find rightmost elment > pivot
        for(int i=n-1; i>pivot; i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // reverse ( pivot+1 to n-1)
        int st=pivot+1;
        int end=n-1;
        while(st<end){
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
        
    }
};