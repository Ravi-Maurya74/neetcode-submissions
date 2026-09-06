class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        int max_seen = -1;
        for(int i=n-1;i>=0;i--){
            ans[i]=max_seen;
            max_seen=max(max_seen,arr[i]);
        }
        return ans;
    }
};