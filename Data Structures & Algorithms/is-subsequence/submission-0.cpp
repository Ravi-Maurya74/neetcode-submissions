class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = 0;
        for(auto &it: t){
            if(n<s.size() and s[n]==it)
              n++;
        }
        if(n==s.size())
          return true;
        return false;
    }
};