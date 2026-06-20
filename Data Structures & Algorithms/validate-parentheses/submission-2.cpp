class Solution {
   public:
    bool isValid(string s) {
        stack<char> par;

        for (const auto& c : s) {
            if (c == '(' || c == '[' || c == '{')
                par.push(c);

            if (c == ')') {
                if(par.empty()) return false;
                if (par.top() == '(')
                    par.pop();
                else
                    return false;
            } else if (c == ']') {
                if(par.empty()) return false;
                if (par.top() == '[')
                    par.pop();
                else
                    return false;
            } else if (c == '}') {
                if(par.empty()) return false;
                if (par.top() == '{')
                    par.pop();
                else
                    return false;
            }
        }

        return par.empty();
    }
};