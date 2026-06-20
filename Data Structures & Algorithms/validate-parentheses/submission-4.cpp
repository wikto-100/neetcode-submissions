class Solution {
   public:
    inline bool match(stack<char>& p, const char ptype) {
        if (p.top() == ptype)
            p.pop();
        else
            return false;
        return true;
    }
    bool isValid(string s) {
        stack<char> par;

        for (const auto& c : s) {
            if (c == '(' || c == '[' || c == '{') par.push(c);

            if (par.empty()) return false;
            switch (c) {
                case ')': {
                    if (!match(par, '(')) return false;
                    break;
                }
                case ']': {
                    if (!match(par, '[')) return false;
                    break;
                }
                case '}': {
                    if (!match(par, '{')) return false;

                    break;
                }
            }
        }

        return par.empty();
    }
};