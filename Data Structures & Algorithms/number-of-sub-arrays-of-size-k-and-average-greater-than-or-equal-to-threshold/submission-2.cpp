class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int totSub = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }

        if(sum/k >= threshold) totSub++;

        int left = 0, right = k;
        while(right < arr.size()){
            sum = sum - arr[left] + arr[right];

            if(sum/k >= threshold) totSub++;
            left++; 
            right++;
        } 

        return totSub;
    }
};