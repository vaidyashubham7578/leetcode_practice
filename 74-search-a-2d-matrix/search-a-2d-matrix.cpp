class Solution {
public:
    bool SearchInRow(vector<vector<int>>& mat, int target, int midRow){
        int n=mat[0].size();
        int st=0, end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[midRow][mid]){
                return true;
            }else if(target>mat[midRow][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(), n=mat[0].size();
        int stRow=0, endRow=m-1;

        while(stRow<=endRow){
            int midRow=stRow + (endRow - stRow)/2;
            if(target>=mat[midRow][0] && target<=mat[midRow][n-1]){
                //  Found the row
                return SearchInRow(mat, target, midRow);
            }else if(target>=mat[midRow][n-1]){
                stRow=midRow+1;  // down 
            }else{
                endRow=midRow-1;  // up
            }
        }
        return false;
    }
};