class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = count(bank[0].begin(), bank[0].end(), '1');
        int answer = 0;
        for(int i{1}; i< bank.size(); ++i)
        {
            int cur = count(bank[i].begin(), bank[i].end(), '1');
            if(cur != 0)
            {
                answer += cur * prev;
                prev = cur;
            }
        }
        return answer;
    }
};
