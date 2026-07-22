class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }

        for(int i=0; i<nums.size(); i++){
            int rem = tar - nums[i];
            if(mp.find(rem) != mp.end() && i != mp[rem]){
                return {i+1, mp[rem]+1};
            }
        }

        return {-1, -1};
    }
};
