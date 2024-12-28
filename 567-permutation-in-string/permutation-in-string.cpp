class Solution {
public:
    bool isMatch(int freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++){
            // int indx=s1[i]-'a';
            freq[s1[i]-'a']++;
        }

        int windowSize=s1.length();
       
        for(int i=0; i<s2.length(); i++){
            int windIdx=0, Idx=i;
            int windowfreq[26]={0};

            while(windIdx<windowSize && Idx<s2.length()){
                windowfreq[s2[Idx]-'a']++;
                windIdx++; Idx++;
            }
            if(isMatch(freq, windowfreq)){
                return true;
            }

        }
        return false;
        
    }
};