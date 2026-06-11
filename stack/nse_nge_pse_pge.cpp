class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int> nge(n,n);
        vector<int> nse(n,n);
        vector<int> pse(n,-1);
        vector<int> pge(n,-1);
        stack<int> stk;
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && nums[i]>=nums[stk.top()]){
                stk.pop();
            }
            if(!stk.empty()){
                nge[i]=stk.top();
            }
            stk.push(i);
        }
        while (!stk.empty()) stk.pop();
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && nums[i]<=nums[stk.top()]){
                stk.pop();
            }
            if(!stk.empty()){
                nse[i]=stk.top();
            }
            stk.push(i);
        }
        while (!stk.empty()) stk.pop();
        for(int i=0;i<n;i++){
            while(!stk.empty() && nums[i]>nums[stk.top()]){
                stk.pop();
            }
            if(!stk.empty()){
                pge[i]=stk.top();
            }
            stk.push(i);
        }
       while (!stk.empty()) stk.pop();
        for(int i=0;i<n;i++){
            while(!stk.empty() && nums[i]<nums[stk.top()]){
                stk.pop();
            }
            if(!stk.empty()){
                pse[i]=stk.top();
            }
            stk.push(i);
        }
        long long summin=0;
        for(int i=0;i<n;i++){
            int right=nse[i]-i;
            int left=i-pse[i];
            summin+= (1ll*left*right*nums[i]);
        }
        long long summax=0;
        for(int i=0;i<n;i++){
            int right=nge[i]-i;
            int left=i-pge[i];
            summax+= (1ll*left*right*nums[i]);
        }
        return summax-summin;
    }
};
