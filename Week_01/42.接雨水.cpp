class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        if(height.size()<3) {return ans;}
        int size=height.size();
        vector<int> left(size),right(size);
        int leftmax=height[0],rightmax=height[size-1];
        for(int i=1;i<height.size();i++)
        {
            left[i]=leftmax;
            leftmax=max(leftmax,height[i]);
        }
        for(int i=height.size()-2;i>=0;i--)
        {
            right[i]=rightmax;
            rightmax=max(rightmax,height[i]);
        }
        for(int i=1;i<height.size()-1;i++)
        {
            int temp=min(left[i],right[i]);
            ans+=max(temp-height[i],0);
        }
        return ans;
    }
};
