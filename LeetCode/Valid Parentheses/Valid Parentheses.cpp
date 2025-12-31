class Solution {
    private: 
    char f(const auto &x)
    {
        if(x == '}') return '{';
        else if(x==']') return '[';
        else if(x == ')') return '(';
        else return '0';
    }
public:
    bool isValid(string s) 
    {     
        stack<char> st;
        for(const auto &elem : s)
        {
            const auto c = f(elem);
            if(c != '0')
            {
                if(!st.empty() && st.top() == c)
                    st.pop();
                else return false;
            }
            else st.push(elem);
        }
        return st.empty();
    }
};
