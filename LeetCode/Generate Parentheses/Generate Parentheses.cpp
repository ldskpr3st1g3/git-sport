unordered_map<char, char> m{
                {'}','{'},
                                    {')', '('},
                                                                {']', '['},
                                                                                                    {'>', '<'}
                                                                                                                                            };

class Solution {
public:

    bool check(const string_view& pat)
    {
        stack<char> st;
        for(const auto&elem : pat)
        {
            if(m.find(elem)==m.end()) st.push(elem);
            else if(!st.empty())
            {
                if(st.top() == m[elem]) st.pop();
                else return false;
            }
            else return false;
        }
        return st.empty();
    }

    vector<string> generateParenthesis(int n)
    {
        string temp = string(n, '(') + string(n, ')');
        vector<string> ans;
        do
        {
            if(check(temp)) ans.push_back(temp);

        }while(next_permutation(temp.begin(), temp.end()));
        return ans;
    }
};
