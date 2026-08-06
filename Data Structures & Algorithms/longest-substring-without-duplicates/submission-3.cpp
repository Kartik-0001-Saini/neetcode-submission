class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, left = 0;
        unordered_set<char> st; 
        for(int right = 0; right < s.size(); right++){
            char ch = s[right];
            while(st.find(ch) != st.end()){
                st.erase(s[left]);
                left++;
            }

            st.insert(ch);
            maxLen = max(maxLen, right-left+1);
        }

        return maxLen;
    }
};
