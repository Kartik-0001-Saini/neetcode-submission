class Solution {
public:
    int dfs(vector<int>& nums, int maxInt, int minInt, int idx, int tar){
        if(idx == nums.size()){
            if(minInt != INT_MAX && (maxInt + minInt) <= tar){
                return 1;
            }
            return 0;
        }

        int skip = dfs(nums, maxInt, minInt, idx+1, tar);
        int include = dfs(nums, max(maxInt, nums[idx]), min(minInt, nums[idx]), idx+1, tar);

        return (skip + include) % MOD;
    }

    const int MOD = 1e9 + 7;

    int numSubseq(vector<int>& nums, int tar) {
        return dfs(nums, INT_MIN, INT_MAX, 0, tar);
    }
};