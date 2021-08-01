class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        if(size==0)
        {
            return 0;
        }
        vector<int>maxl(size);
        vector<int>maxr(size);
        maxl[0]=height[0];
        for(int i=1;i<size;i++)
        {
            maxl[i]=max(maxl[i-1],height[i]);
        }
        maxr[size-1]=height[size-1];
        for(int i=size-2;i>=0;i--)
        {
            maxr[i]=max(maxr[i+1],height[i]);
        }
        int water=0;
        for(int i=0;i<size;i++)
        {
            water+=(min(maxr[i],maxl[i])-height[i]);
        }
        return water;
    }
};
