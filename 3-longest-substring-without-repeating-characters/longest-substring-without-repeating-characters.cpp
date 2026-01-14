class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> charMap;
        int left = 0;
        int maxlength = 0;
        for(int i=0;i<s.length();i++){
            if(charMap.find(s[i]) != charMap.end() && charMap[s[i]] >= left){
                left = charMap[s[i]] + 1;
            }
            charMap[s[i]] = i;
            maxlength = max(maxlength, i - left + 1);
        }
        return maxlength;
    }
};