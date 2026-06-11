// https://leetcode.com/problems/range-sum-query-mutable/
class NumArray {
public:
    vector<int>segtree;
    int n;
    NumArray(vector<int>& nums) {
        n=nums.size();
        segtree.resize(n*4);
        buildTree(0,0,n-1,nums);
    }
    void buildTree(int i,int l,int r,vector<int>& nums){
        if(l==r){
            segtree[i]=nums[r];
            return;
        }
        int mid=l+(r-l)/2;
        buildTree(2*i+1,l,mid,nums);
        buildTree(2*i+2,mid+1,r,nums);
        segtree[i]=segtree[2*i+1]+segtree[2*i+2];
    }

    void update(int index, int val) {
        updateTree(0,0,n-1,index,val);
    }
    void updateTree(int i,int l,int r,int ui,int val){
        if(l==r){
            segtree[i]=val;
            return ;
        }
        int mid=l+(r-l)/2;
        if(ui<=mid){
            updateTree(2*i+1,l,mid,ui,val);
        }else{
            updateTree(2*i+2,mid+1,r,ui,val);
        }
        segtree[i]=segtree[2*i+1]+segtree[2*i+2];
    }
    
    int sumRange(int left, int right) {
        return queryTree(0,0,n-1,left,right);
    }
    int queryTree(int i,int l,int r,int ql,int qr){
        if(r<ql || qr<l) return 0;
        if(ql<=l && r<=qr) return segtree[i];
        int mid=l+(r-l)/2;
        int leftans=queryTree(2*i+1,l,mid,ql,qr);
        int rightans=queryTree(2*i+2,mid+1,r,ql,qr);
        return leftans+rightans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
