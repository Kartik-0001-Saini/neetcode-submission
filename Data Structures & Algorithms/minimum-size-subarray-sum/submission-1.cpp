class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX;
        int tot = 0;
        int left = 0;

        for(int right=0; right<n; right++){
            tot += nums[right];

            while(tot >= target){
                minLen = min(minLen, right - left + 1);
                tot -= nums[left];
                left++;
            }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};