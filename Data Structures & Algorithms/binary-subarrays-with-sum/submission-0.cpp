class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int preSum = 0, res = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        for(int ele : nums){
            preSum += ele;
            res += mp[preSum-goal];
            mp[preSum]++;
        }

        return res;
    }
};