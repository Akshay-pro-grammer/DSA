// leetcode 3341
class Solution {
public:
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    int minTimeToReach(vector<vector<int>>& moveTime) {
        const int n = moveTime.size();
        const int m = moveTime[0].size();
        vector<vector<int>> result(n, vector<int>(m, INT_MAX));
        result[0][0] = 0;
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        // dijkstra algo
        pq.push({0, {0, 0}});
        
        while (!pq.empty()) {
            int currTime = pq.top().first;
            auto cell = pq.top().second;
            pq.pop();
            if (cell.first == n - 1 && cell.second == m - 1) {
                return currTime;
            }
            int i = cell.first;
            int j = cell.second;
            for (auto &d : dir) {
                int i_ = i + d.first;
                int j_ = j + d.second;
                if(i_ >= 0 && i_ < n && j_ >= 0 && j_ < m) {
                    int wait    = max(moveTime[i_][j_] - currTime, 0);
                    int arrTime = currTime + wait + 1;

                    if(result[i_][j_] > arrTime) {
                        result[i_][j_] = arrTime;
                        pq.push({arrTime, {i_, j_}});
                    }
                    
                }
            }
        }
        return -1;
    }
};
