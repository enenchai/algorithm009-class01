class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ans;
        int num=0;
        string temp;
        unordered_map<string,int> mp;
        for(string s:strs)
        {
            temp=s;
            sort(temp.begin(),temp.end());
            if(mp.find(temp)!=mp.end())
            {
                ans[mp[temp]].emplace_back(s);
            }
            else
            {
                mp[temp]=num++;
                vector<string> t(1,s);
                ans.emplace_back(t);
            }
        }
        return ans;
    }
};
