class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0);
        stack<int> st; // stores index values

        for (int i = n - 1; i >= 0; i--) {
            // Pop all days when temperature <= current day
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            // If stack not empty, next warmer day exists
            if (!st.empty()) {
                res[i] = st.top() - i;
            }

            // Push current day index
            st.push(i);
        }

        return res;
    }
};