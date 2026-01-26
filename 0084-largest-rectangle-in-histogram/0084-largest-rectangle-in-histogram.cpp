class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[i] < heights[st.top()]) {
                int topi = st.top();
                st.pop();

                int width;
                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                int area = heights[topi] * width;
                maxArea = max(maxArea, area);
            }
            st.push(i);
        }
        while(!st.empty()) {
            int topi = st.top();
            st.pop();

            int width;
            if(st.empty())
                width = n;
            else
                width = n - st.top() - 1;

            int area = heights[topi] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
