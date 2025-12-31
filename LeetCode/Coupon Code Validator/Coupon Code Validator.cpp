#define all(x) (x).begin(), (x).end()
class Solution {
public:

    bool check_code(const string_view& view)
    {
        if(view.empty()) return false;
        for(const auto& elem : view)
        {
            if(!isalnum(elem) && elem != '_') return false;
        }
        return true;
    }

    bool check_Line(const string_view& view)
    {
        static unordered_set<string_view> st{"electronics", "grocery", "pharmacy", "restaurant"};
        return st.find(view) != st.end();
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        const int n = static_cast<int>(code.size());
        vector<string> result;
        vector<string> first;
        vector<string> second;
        vector<string> thirth;
        vector<string> fourth;

        result.reserve(n);
        for(int i{0}; i < n; ++i)
        {
            if(isActive[i])
            {
                if(!check_code(code[i])) continue;
                if(!check_Line(businessLine[i])) continue;
                if(businessLine[i] == "electronics") first.emplace_back(code[i]);
                else if(businessLine[i] == "grocery") second.emplace_back(code[i]);
                else if(businessLine[i] == "pharmacy") thirth.emplace_back(code[i]);
                else if(businessLine[i] == "restaurant") fourth.emplace_back(code[i]);
            }
        }
        sort(all(first));
        sort(all(second));
        sort(all(thirth));
        sort(all(fourth));
        copy(all(first), back_inserter(result));
        copy(all(second), back_inserter(result));
        copy(all(thirth), back_inserter(result));
        copy(all(fourth), back_inserter(result));
        return result;

        
    }
};
