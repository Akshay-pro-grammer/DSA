//947. Most Stones Removed with Same Row or Column
class Solution {
public:
    struct Hashed{
        size_t operator()(const pair<int,int>&p) const noexcept{
            return hash<int>()(p.first)^(hash<int>()(p.second)<<1);
        }
    };
    void dfs(unordered_set<pair<int,int>,Hashed>&strstones,pair<int,int> s){
        strstones.erase(s);
        auto [a,b]=s;
        vector<pair<int,int>> tovisit;
        for(pair<int,int> stone:strstones){
            if(stone.first==a || stone.second==b){
                tovisit.push_back(stone);
            }
        }
        for(auto [x,y]:tovisit){
            if(a==x || y==b)
            dfs(strstones,{x,y});
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        unordered_set<pair<int,int>,Hashed> strstones;
        for(auto& v:stones){
            int x=v[0];
            int y=v[1];
            strstones.insert({x,y});
        }
        int count=0;
        while(!strstones.empty()){
            count++;
            dfs(strstones,*strstones.begin());
        }
        return stones.size()-count;
    }
};
