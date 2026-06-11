class Solution {
public:
    int find(int i,vector<int>&parent){
        if(parent[i]==i){
            return i;
        }
        return parent[i]=find(parent[i],parent);
    }
    void uniond(int i,int j,vector<int>&parent,vector<int>&rank){
        int pi=find(i,parent);
        int pj=find(j,parent);
        if(pi==pj){
            return ;
        }
        if(rank[pi]>rank[pj]){
            parent[pj]=pi;
        }else if(rank[pi]<rank[pj]){
            parent[pi]=pj;
        }else{
            parent[pj]=pi;
            rank[pi]++;
        }
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<vector<pair<int, int>>> adj(points.size());
        priority_queue<tuple<int, int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        for (int i = 0; i < points.size(); i++) {
            for (int j = i + 1; j < points.size(); j++) {
                auto& p1 = points[i];
                auto& p2 = points[j];
                int w = abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
                pq.push({w,i,j});
            }
        }
        //DSU
        vector<int>parent(points.size());
        for(int i=0;i<parent.size();i++){
            parent[i]=i;
        }
        vector<int>rank(points.size(),0);
        int ans = 0;
        while (!pq.empty()) {
            auto [w, i,j] = pq.top();
            pq.pop();
            int pi=find(i,parent);
            int pj=find(j,parent);
            if(pi!=pj){
                uniond(pi,pj,parent,rank);
                ans+=w;
            }
        }
        return ans;
    }
};
