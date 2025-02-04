class Solution {
public:
set<vector<int>>s;
void getAllCombin(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans, vector<int>& combin){
    if(idx==arr.size() || tar<0){
        return;
    }

    if(tar==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }


    combin.push_back(arr[idx]);
    getAllCombin(arr, idx+1, tar-arr[idx], ans, combin); // Single Include
    getAllCombin(arr, idx, tar-arr[idx], ans, combin); // Multiple Include

    combin.pop_back(); // Backtracking
    getAllCombin(arr, idx+1, tar, ans, combin);  //Exclude

    // return; 

}

    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>>ans;
        vector<int>combin;

        getAllCombin(arr, 0, tar, ans, combin);
        return ans;
    }
};