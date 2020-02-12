class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char occupied[256] = {0};
        int max_len = 0;
        int len = s.length();
        int left = 0, right = 0;
        while(left < len && right < len){
            while (occupied[s[right]]){
                max_len = max_len > (right - left) ? max_len : (right - left);
                occupied[s[left]] = 0;
                left ++;
            }
            occupied[s[right]] = 1;
            right++;
        }
        return max_len > (right - left) ? max_len : (right - left);
    }
};