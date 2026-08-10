class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freqArr(26, 0);
        int freq = 0;
        int windowSz = 0;
        int left = 0;
        int n = s.size();
        int maxLen = 0;

        for(int i=0; i<n; i++){
            char ele = s[i];
            freqArr[ele - 'A']++;
            freq = max(freq, freqArr[ele - 'A']);

            windowSz = i - left + 1;
            if(windowSz - freq > k){
                freqArr[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, i-left+1);
        }

        return maxLen;
    }
};
