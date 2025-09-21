class Solution {
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int,vector<int>> adj;
        unordered_map<int,int> indegree,outdegree;
        for(auto &v:pairs){
            adj[v[0]].push_back(v[1]);
            outdegree[v[0]]++;
            indegree[v[1]]++;
        }
        int startnode=pairs[0][0];
        for(auto &v:pairs){
            if((outdegree[v[0]]-indegree[v[0]])==1){
                startnode=v[0];
                break;
            }
        }
        vector<vector<int>> ans;
        ans.reserve(pairs.size());
        stack<int> stk;
        stk.push(startnode);
        vector<int> path;
        while(!stk.empty()){
            int u=stk.top();
            if(!adj[u].empty()){
                int v=adj[u].back();
                adj[u].pop_back();
                stk.push(v);
            }else{
                path.push_back(u);
                stk.pop();
            }
        }
        reverse(path.begin(),path.end());
        for(int i=0;i+1<path.size();i++){
            ans.push_back({path[i],path[i+1]});
        }
        return ans;
    }
};
