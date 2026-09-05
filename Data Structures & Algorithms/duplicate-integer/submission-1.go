func hasDuplicate(nums []int) bool {
	seen:=map[int]bool{}
	n:=len(nums)
	for i:=0; i<n;i++{
		if seen[nums[i]] {
			return true;
		}
		seen[nums[i]] = true
	}
	return false;
}