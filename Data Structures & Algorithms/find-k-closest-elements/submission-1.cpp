int x;
bool compare(int a, int b){
    if(abs(a-x) == abs(b-x)){
        return a<b;
    }
    return abs(a-x) < abs(b-x);
}

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int tar) {
        x = tar;
        sort(arr.begin(), arr.end(), compare);

        vector<int> res(arr.begin(), arr.begin()+k);
        sort(res.begin(), res.end());

        return res;
    }
};