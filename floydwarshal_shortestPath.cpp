// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &grid) {
      int n = grid.size();
        const int INF = 1e8; // sufficiently large

        // Step 1: Convert -1 into INF (means no edge)
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (grid[i][j] == -1) grid[i][j] = INF;
        //         if (i == j) grid[i][j] = 0;
        //     }
        // }

        // Step 2: Floyd–Warshall
        for (int via = 0; via < n; via++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][via] < INF && grid[via][j] < INF) {
                        grid[i][j] = min(grid[i][j], grid[i][via] + grid[via][j]);
                    }
                }
            }
        }

        // Step 3: Convert INF back into -1
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (grid[i][j] == INF) grid[i][j] = -1;
        //     }
        // }
    }
};
