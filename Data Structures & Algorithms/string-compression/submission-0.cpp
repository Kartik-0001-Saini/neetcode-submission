class Solution {
   public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int write = 0;
        while(i < n){
            char currEle = chars[i];
            int count = 0;
            
            while(i < n && currEle == chars[i]){
                count++;
                i++;
            }

            chars[write++] = currEle;

            if(count > 1){
                string cnt = to_string(count);
                for(auto ch:cnt){
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};