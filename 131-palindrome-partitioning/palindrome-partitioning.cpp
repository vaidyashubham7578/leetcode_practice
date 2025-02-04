class Solution {
public:
    bool isPalindr(string s){
        string s2=s;
        reverse(s2.begin(), s2.end());
        return s2==s;
    }

    void getAllCombin(string s, vector<vector<string>>& ans, vector<string>& combin){
        if(s.size()==0){
            ans.push_back(combin);
            return;
        }

        for(int i=0; i<s.size(); i++){
            string part=s.substr(0,i+1);
            if(isPalindr(part)){
                combin.push_back(part);
                getAllCombin(s.substr(i+1), ans, combin);
                combin.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>combin;
        getAllCombin(s, ans, combin);

        return ans;
    }
};