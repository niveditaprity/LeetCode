class NumArray {
public:
    vector<int>seg;
    int n;
    NumArray(vector<int>& nums) {
      if (!nums.size()) return ;
        seg.assign(nums.size() * 4, 0);
        n = nums.size();
        build(nums, 0, 0, n - 1);   
    }
    void build(vector<int>& nums,int i , int l , int r)
    {
        if(l==r)
        {
            seg[i] = nums[l];
        }
        else{
        int mid = l + (r - l) / 2;
        build(nums,2*i+1,l,mid);
        build(nums, 2*i+2,mid+1,r);
            
        seg[i] = seg[2*i+1] + seg[2*i+2];
        }
    }
    
    void update(int i,int l,int r,int index,int val)
    {
        if(l==r)
        {
            seg[i] = val;
        }
        else
        {
           int mid = l + (r - l) / 2;
            if(index<=mid)
            {
                update(2*i+1,l,mid,index,val);
            }
            else
            {
                update(2*i+2,mid+1,r,index,val);
            }
            seg[i] = seg[2*i+1] + seg[2*i+2];
            
        }
    }
    void update(int index, int val) {
       update(0,0,n-1,index,val); 
    }
    
    int sumRange(int i, int l, int r, int left, int right)
    {
        if(left>right)
        {
            return 0;
        }
        if(l == left && r == right)
        {
            return seg[i];
        }
        int mid = l + (r - l) / 2;
        return sumRange(2*i+1,l,mid,left,min(mid,right)) + sumRange(2*i+2,mid+1,r,max(mid+1,left),right);
    }
    
    int sumRange(int left, int right) {
     return  sumRange(0,0,n-1,left,right); 
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
