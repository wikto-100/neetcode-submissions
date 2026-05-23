class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        bool odd = (n % 2) != 0;
        vector<char> clear;
        for(int i = 0; i < n; i++){
            if(isalnum(s[i])) clear.emplace_back(tolower(s[i]));
        }
        for(int i = 0,j=clear.size()-1; i < j; i++,j--){
            cout << clear[i] << ' ' << clear[j] << endl; 
            if(clear[i] != clear[j]) {return false;}

        }
        return true;
    }
};
