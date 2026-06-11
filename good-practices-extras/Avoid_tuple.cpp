// so i learnt a hard way that we should avoid tuple in logic heavy questions
// 2751. Robot Collisions (leetcode)

// Using tuple (very complex and hard to debug)
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        vector<tuple<int,int,char,int>>robots(n);
        for(int i=0;i<n;i++){
            robots[i]={positions[i],healths[i],directions[i],i};
        }
        sort(robots.begin(),robots.end());
        vector<tuple<int,int,char,int>>stk;
        for(int i=0;i<n;i++){
            bool hasbroken=false;
            while(!stk.empty() && get<2>(stk.back())=='R' && get<2>(robots[i])=='L'){
                if(get<1>(stk.back())==get<1>(robots[i])){
                    stk.pop_back();
                    hasbroken=true;
                    break;
                }else if (get<1>(stk.back())>get<1>(robots[i])){
                    get<1>(stk.back())--;
                    hasbroken=true;
                    break;
                }else{
                    stk.pop_back();
                    get<1>(robots[i])--;
                }
            }
            if(hasbroken==false && (stk.empty() || (get<2>(stk.back())=='L' && get<2>(robots[i])=='R') || (get<2>(stk.back())==get<2>(robots[i])))){
                stk.push_back(robots[i]);
            }
        }

        sort(stk.begin(),stk.end(),[](const auto&a, const auto&b){
            return get<3>(b)>get<3>(a);
        });
        vector<int>ans;
        ans.reserve(stk.size());
        for(auto &i:stk){
            ans.push_back(get<1>(i));
        }
        return ans;
    }
};


// without tuple using struct (much more readable and easy to debug), the struct itself explains the variables
class Solution {
public:
    struct Robot {
        int pos;
        int health;
        char dir;
        int idx;
    };
    vector<int> survivedRobotsHealths(
        vector<int>& positions, vector<int>& healths, string directions) {  
        int n=positions.size();
        vector<Robot> robots(n);

        for(int i=0;i<n;i++){
            robots[i]={positions[i],healths[i],directions[i],i};
        }
        sort(robots.begin(),robots.end(),[](const Robot &a,const Robot &b){
            return a.pos<b.pos;
        });

        vector<Robot> stk;
        for(int i=0;i<n;i++){
            bool destroyed=false;

            while(!stk.empty() && stk.back().dir=='R' && robots[i].dir=='L') {
                if(stk.back().health == robots[i].health){
                    stk.pop_back();
                    destroyed=true;
                    break;
                } 
                else if(stk.back().health > robots[i].health){
                    stk.back().health--;
                    destroyed=true;
                    break;
                } 
                else{
                    robots[i].health--;
                    stk.pop_back();
                }
            }

            if (!destroyed){
                stk.push_back(robots[i]);
            }
        }

        sort(stk.begin(),stk.end(),[](const Robot &a, const Robot &b){
            return a.idx<b.idx;
        });

        vector<int> ans;
        ans.reserve(stk.size());

        for(auto &r:stk){
            ans.push_back(r.health);
        }

        return ans;
    }
};
