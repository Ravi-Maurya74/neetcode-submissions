func replaceElements(arr []int) []int {
	n := len(arr)
	ans := make([]int, n)
	max_seen := -1
	for i := n - 1; i >= 0; i-- {
		ans[i] = max_seen
		max_seen = max(max_seen, arr[i])
	}
	return ans
}