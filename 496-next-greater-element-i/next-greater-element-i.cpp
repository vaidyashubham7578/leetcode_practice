class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& s1, vector<int>& s2) {
        unordered_map<int, int>mp;
        stack<int>s;
        for(int i=s2.size()-1; i>=0; i--){
            while(s.size()>0 && s.top()<=s2[i]){
                s.pop();
            }
            if(s.empty()){
                mp[s2[i]]=-1;
            }else{
                mp[s2[i]]=s.top();
            }

            s.push(s2[i]);
        }

        vector<int>ans;
        for(int i=0; i<s1.size(); i++){
           ans.push_back(mp[s1[i]]);
        }
        return ans;

    }
};