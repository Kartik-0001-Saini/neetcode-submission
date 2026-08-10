class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count = 0;
        for(int i=0; i<=n-k; i++){
            int total = 0;
            for(int j=0; j<k; j++){
                total+=arr[i+j];
            }
            if(total/k >= threshold){
                count++;
            }
        }

        return count;
    }
};