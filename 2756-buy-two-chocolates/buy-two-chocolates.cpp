class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first_min = INT_MAX;
        int second_min = INT_MAX;

        for (int p : prices) {
            if (p < first_min) {
                second_min = first_min;
                first_min = p;
            }
            else if (p < second_min) {
                second_min = p;
            }
        }

        int cost = first_min + second_min;

        if (cost > money)
            return money;

        return money - cost;
    }
};