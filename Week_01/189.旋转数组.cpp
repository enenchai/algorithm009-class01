class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0) {return ;}
        k=k%nums.size();
        vector<int> n(k);
        int size=nums.size();
        for(int i=size-k;i<size;i++)
        {
            n[i-size+k]=nums[i];
        }
        for(int i=size-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=n[i];
        }
    }
};
