class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashtable[26]={0};
        for(char a:s)
        {
            hashtable[a-'a']++;
        }
        for(char a:t)
        {
            hashtable[a-'a']--;
        }
        for(int i:hashtable)
        {
            if(i!=0) {return false;}
        }
        return true;
    }
};
