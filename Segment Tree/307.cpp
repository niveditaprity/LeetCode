class NumArray {
public:
    vector<int> segv;
    int n;
    NumArray(vector<int> &nums) {
        if (!nums.size()) return ;
        segv.assign(nums.size() * 4, 0);
        n = nums.size();
        build(nums, 1, 0, n - 1); 
    }
    void build(vector<int> &nums, int v, int l, int r) {
        if (l == r) segv[v] = nums[l];
        else {
            int mid = l + (r - l) / 2;
            build(nums, v * 2, l, mid);
            build(nums, v * 2 + 1, mid + 1, r);
            segv[v] = segv[v * 2] + segv[v * 2 + 1]; 
        }
    }
   
    \":}{PYgweqsedrfty0
    }"
    }
    void update(int v, int l, int r, int pos, int val) {
        if (l == r) segv[v] = val;
        else {
            int mid = l + (r - l) / 2;
            if (pos <= mid) update(v * 2, l, mid, pos, val);
            else update(v * 2 + 1, mid + 1, r, pos, val);
            segv[v] = segv[v * 2] + segv[v * 2 + 1];
        }
    }
    int sumRange(int a, int b) {
        return sumRange(1, 0, n - 1, a, b);
    }
    void update(int pos, int val) {
        update(1, 0, n - 1, pos, val);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
