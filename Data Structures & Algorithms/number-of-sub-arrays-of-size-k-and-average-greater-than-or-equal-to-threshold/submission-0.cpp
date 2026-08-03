class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int n = arr.size();
        int count = 0;
        for(int i=0; i<=n-k; i++){
            int avg = 0;
            for(int j=0; j<k; j++){
                avg+=arr[i+j];
            }
            avg = avg/k;
            if(avg >= th){
                count++;
            }
        }

        return count;
    }
};