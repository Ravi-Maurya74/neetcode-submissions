class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        int max_seen = -1;
        for(int i=n-2;i>=0;i--){
            max_seen=max(max_seen,arr[i+1]);
            ans[i]=max_seen;
        }
        return ans;
    }
};