class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)
        ans = [-1] * (n)
        max_seen = -1;
        for i in range(n-2,-1,-1):
            max_seen = max(max_seen,arr[i+1])
            ans[i] = max_seen
        return ans   