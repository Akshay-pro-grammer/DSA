class Solution {
public:
    vector<int>BIT;
    int query(int i){
        int sum=0;
        while(i>0){
            sum+=BIT[i];
            i-= (i&-i);
        }
        return sum;
    }
    void update(int i,int val){
        while(i<BIT.size()){
            BIT[i]+=val;
            i+=(i&-i);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        BIT=vector<int>(nums.size()+1);
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());
        sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());
        vector<int>ans(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            int idx=lower_bound(sorted.begin(),sorted.end(),nums[i])-sorted.begin()+1;
            ans[i]=query(idx-1);
            update(idx,1);
        }
        return ans;
    }
};
