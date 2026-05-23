class Solution {
   public:
    bool isPalindrome(string s) {
        vector<char> clear;
        for (int i = 0; i < s.length(); i++)
            if (isalnum(s[i])) clear.emplace_back(tolower(s[i]));

        for (int i = 0, j = clear.size() - 1; i < j; i++, j--)
            if (clear[i] != clear[j]) return false;
        return true;
    }
};
