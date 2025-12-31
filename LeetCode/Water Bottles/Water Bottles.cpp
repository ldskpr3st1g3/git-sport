class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int temp =0;
        int dummy = 0;
        while(numBottles != 0)
        {
            temp += numBottles;
            numBottles += dummy;
            dummy = numBottles % numExchange;
            numBottles /= numExchange;
        }
        return temp;
    }
};
