// leetcode 1091
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0){
            return -1;
        }
        int n=grid.size();
        vector<pair<int,int>> dir={{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>> res(n,vector<int>(n,INT_MAX));
        q.push({1,{0,0}});
        res[0][0]=1;
        while(!q.empty()){
            auto [dist,v]=q.front();
            auto [i,j]=v;
            q.pop();
            for(auto [a,b]:dir){
                int ni=i+a;
                int nj=j+b;
                if(ni>=0 && ni<n && nj>=0 && nj<n && grid[ni][nj]==0){
                    if(dist+1<res[ni][nj]){
                        res[ni][nj]=dist+1;
                        q.push({dist+1,{ni,nj}});
                    }
                }
            }
        }
    return res[n-1][n-1]==INT_MAX?-1:res[n-1][n-1];

    }
};
