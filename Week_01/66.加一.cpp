class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        int i=size-1;
        while(i>=0&&digits[i]==9)
        {
            digits[i--]=0;
        }
        if(i==-1) {vector<int> a(size+1,0); a[0]=1; return a;}
        else {digits[i]++;}
        return digits;
    }
};
