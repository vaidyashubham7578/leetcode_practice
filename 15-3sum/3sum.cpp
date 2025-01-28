class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&nums) {
        // vector<vector<int>>ans;
        int size=nums.size();
        // set<vector<int>>s;     // set<uniqueTriplets>
        // for(int i=0; i<size-1; i++){
        //     for(int j=i+1; j<size; j++){
        //         for(int k=j+1; k<size+1; k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int>trp={nums[i], nums[j], nums[k]};
        //                 sort(trp.begin(), trp.end());

        //                 if(s.find(trp)==s.end()){
        //                     s.insert(trp);
        //                     ans.push_back(trp);
        //                 }

        //             }    
        //         }
        //     }
        // }
        // return ans;

    // Better 
        // vector<vector<int>>ans;
        // set<vector<int>>uniqueTrip;
        // for(int i=0; i<size-1; i++){
        //     int tar=-nums[i];
        //     set<int>s;

        //     for(int j=i+1; j<size-1; j++){
        //         int third=tar - nums[j];

        //         if(s.find(third) != s.end()) {
        //             vector<int>trip={nums[i], nums[j], tar};
        //             sort(trip.begin(), trip.end());
        //             uniqueTrip.insert(trip);
        //             ans.push_back(trip);
        //         }
        //         s.insert(nums[j]);
        //     }
        // }
        // // vector<vector<int>>ans;
        // return ans;

    // Optimal (2 pointer Approach)
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0; i<size; i++){
            // if ith value and previous or next value are same
            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1, k=size-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;
                    // if jth previous or next value are same
                    while(j<k && nums[j]==nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
};