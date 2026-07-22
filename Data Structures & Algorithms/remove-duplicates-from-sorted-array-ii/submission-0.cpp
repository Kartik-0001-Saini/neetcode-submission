class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int write = 0;
        while(i < n){
            int currEle = nums[i];
            int k = 2;
            while(i<n && currEle == nums[i] && k>0){
                nums[write] = currEle;
                write++;
                i++;
                k--;
            }

            while(i < n && currEle == nums[i]) i++;
            
        }

        return write;
    }
};