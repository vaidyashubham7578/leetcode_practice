class Solution {
public:
    string reverseVowels(string s) {
        // int n=s.size();
        int st=0, end=s.length()-1;
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'}; 

        while(st<end){
            while(st<end && vowels.find(s[st])==vowels.end()){
                st++;
            }
            while(st<end && vowels.find(s[end])==vowels.end()){
                end--;
            }
            swap(s[st], s[end]);
            st++; end--;
        }
        return s;
    }
};