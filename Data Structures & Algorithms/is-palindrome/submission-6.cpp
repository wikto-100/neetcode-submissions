class Solution {
   public:
    bool isPalindrome(string s) {
        vector<char> clear;
        for (int i = 0; i < s.length(); i++)
            if (isalnum(s[i])) clear.emplace_back(tolower(s[i]));
        int c = clear.size();
        for (int i = 0; i < c/2; i++)
            if (clear[i] != clear[c-1-i]) return false;
        return true;
    }
};
