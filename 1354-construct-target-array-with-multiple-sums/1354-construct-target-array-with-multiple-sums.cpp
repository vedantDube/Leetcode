class Solution {
public:
    bool isPossible(vector<int>& target) {
        long sum = 0;

        priority_queue<int> pq;

        for(int x : target) {
            sum += x;
            pq.push(x);
        }

        while(true) {
            int largest = pq.top();
            pq.pop();

            long rest = sum - largest;

            
            if(largest == 1 || rest == 1)
                return true;

            
            if(rest == 0 || largest <= rest)
                return false;

            int previous = largest % rest;

            if(previous == 0)
                return false;

            pq.push(previous);
            sum = rest + previous;
        }
    }
};
