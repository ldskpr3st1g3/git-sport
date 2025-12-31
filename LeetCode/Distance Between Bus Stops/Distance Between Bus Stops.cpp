class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int total = accumulate(distance.begin(), distance.end(),0);
        if(start <= destination) swap(start,destination);
        int first = accumulate(distance.begin() + destination, distance.begin()+start,0);
        return min(total - first, first);
    }
};
