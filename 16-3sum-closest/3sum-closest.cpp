class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
        int n=nums.size();
        int closest=0;
        sort(nums.begin(), nums.end());
        int mindiff=INT_MAX;
        for(int i=0; i<n; i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<tar){
                    j++;
                }else if(sum>tar){
                    k--;
                }else{
                    return sum;
                }
                int diff=fabs(sum-tar);
                if(diff<mindiff){
                    mindiff=diff;
                    closest=sum;
                }
            }
            
        }
        return closest;
    }
};