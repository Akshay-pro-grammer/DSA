//1e8 can be changed to INT_MAX
#include<bits/stdc++.h>
class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> ans(V,1e8);
        ans[src]=0;
        for(int i=1;i<=V-1;i++){
            for(auto& e:edges){
                int u=e[0];
                int v=e[1];
                int w=e[2];
                if(ans[u]!=1e8){
                    if(ans[u]+w<ans[v]){
                        ans[v]=ans[u]+w;
                    }
                }
            }
        }
        for(auto& e:edges){
                int u=e[0];
                int v=e[1];
                int w=e[2];
                if(ans[u]!=1e8){
                    if(ans[u]+w<ans[v]){
                        return {-1};
                    }
                }
            }
        return ans;
    }
};
