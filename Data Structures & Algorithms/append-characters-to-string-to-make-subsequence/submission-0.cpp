class Solution {
public:
    int appendCharacters(string s, string t) {
        int ind=0;
        for(auto &it: s){
            if(ind<s.size() and t[ind]==it)
              ind++;
        }
        return t.size()-ind;
    }
};