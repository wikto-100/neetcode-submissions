class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        // they are the same length

        array<int, 30> tc{0};
        array<int, 30> sc{0};

        for (int i = 0; i < n; i++) {
            tc[t[i] - 97]++;
            sc[s[i] - 97]++;
        }
        for (int i = 0; i < 30; i++) {
            if (tc[i] != sc[i]) return false;
        }

        return true;
    }
};
