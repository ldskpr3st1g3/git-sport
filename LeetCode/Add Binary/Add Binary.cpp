class Solution {
public:
    string addBinary(string a, string b) {
        
        int n = a.size()-1;
        int m = b.size()-1;
        string ans = "";
        int temp = 0;
        int elem;
        bool flag;
        while(n >= 0 || m >= 0 || temp)
        {
            elem = temp;
            temp = 0;
            if(n >= 0)
            {
                elem += a[n--] - '0';
            }
            if(m >= 0)
            {
                elem += b[m--]-'0';
            }
            temp = elem >=2;
            ans=to_string(elem%2) + ans;           
        }
        return ans;
    }
};
