class Solution {
public:
    int numRescueBoats(vector<int>& nums, int tar) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int st = 0, end = n-1;
        int totalBoat = 0;

        while(st <= end){
            if(nums[st] + nums[end] <= tar){
                totalBoat++;
                st++;
                end--;
            }
            else if(nums[end] <= tar){
                totalBoat++;
                end--;
            }
            
        }

        return totalBoat;
    }
};