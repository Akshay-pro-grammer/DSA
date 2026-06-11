//Position this line where user code will be pasted.
class Solution {
  public:
    void findTopologicalOrder(stack<int> &stk,vector<vector<int>> &adj,int start,vector<bool>&vis){
        vis[start]=true;
        for(int u:adj[start]){
            if(!vis[u])
                findTopologicalOrder(stk,adj,u,vis);
        }
        stk.push(start);
    }
    void dfs(int start,vector<vector<int>> &adj,vector<bool> &vis){
        vis[start]=true;
        for(int i:adj[start]){
            if(!vis[i]){
                dfs(i,adj,vis);
            }
        }
    }
    int kosaraju(vector<vector<int>> &adj) {
        stack<int> stk;
        vector<bool>vis(adj.size(),false);
        for(int i=0;i<adj.size();i++){
            if(!vis[i])
                findTopologicalOrder(stk,adj,i,vis);
        }
        vector<vector<int>> revadj(adj.size());
        for(int i=0;i<adj.size();i++){
            auto &vec=adj[i];
            for(int j=0;j<vec.size();j++){
                revadj[vec[j]].push_back(i);
            }
        }
        vector<bool> vis2(adj.size(),false);
        int count=0;
        while(!stk.empty()){
            int i=stk.top();
            stk.pop();
            if(!vis2[i]){
                count++;
                dfs(i,revadj,vis2);
            }
        }
        return count;
    }
};
