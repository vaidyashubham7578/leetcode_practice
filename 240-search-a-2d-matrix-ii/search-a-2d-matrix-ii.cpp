class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(), n=mat[0].size();

        int r=0, c=n-1;
        while(c>=0 && r<m){
            if(target==mat[r][c]){
                return true;
            }else if(target>mat[r][c]){
                r++;
            }else{
                c--;
            }
        }
        return false;
    }
};