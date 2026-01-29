class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i = 0;i<tickets.size();i++){
            q.push({i,tickets[i]});
        }
        int time = 0;

        while(!q.empty()){
            int person = q.front().first;
            int remain = q.front().second;
            q.pop();
            time++;
            remain = remain-1;
            if(person == k && remain==0){
                return time;
            }
            if(remain>0){
            q.push({person,remain});}
        }
        return time;
    }
};