class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto &it:strs){
            ans+=to_string(it.size());
            ans+='#';
            ans+=it;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        while(s.size()){
            string num = s.substr(0,s.find('#'));
            s.erase(0,num.size()+1);
            ans.push_back(s.substr(0,stoi(num)));
            s.erase(0,stoi(num));
        }
        return ans;
    }
};
