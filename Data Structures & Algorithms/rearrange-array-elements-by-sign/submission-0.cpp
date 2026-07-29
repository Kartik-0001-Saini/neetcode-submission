class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negetiveArr, positiveArr;
        for(auto num:nums){
            if(num < 0){
                negetiveArr.push_back(num);
            }
            else{
                positiveArr.push_back(num);
            }
        }

        int j=0, k=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2!=0){
                nums[i] = (negetiveArr[j++]);
            }
            else{
                nums[i] = (positiveArr[k++]);
            }
        }

        return nums;
    }
};