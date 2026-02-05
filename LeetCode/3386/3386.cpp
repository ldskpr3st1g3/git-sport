class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        pair<int,int> result {events[0][0], events[0][1]};
        pair<int,int> prev = result;
        if(events.size() ==1 ) return result.first;
        for(auto iter = events.begin()+1; iter != events.end(); ++iter)
        {
            int raz = (*iter)[1] - prev.second;
            if(raz > result.second) result = {(*iter)[0], raz};
            if(raz == result.second && (*iter)[0] < result.first) result = make_pair((*iter)[0], raz);
            prev ={(*iter)[0], (*iter)[1]};
        }
        return result.first;
    }
};
