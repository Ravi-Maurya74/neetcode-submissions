func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}
	m1 := map[byte]int{}
	m2 := map[byte]int{}
	n := len(s)
	for i := 0; i < n; i++ {
		m1[s[i]] = m1[s[i]] + 1
		m2[t[i]] = m2[t[i]] + 1
	}
	for key, value := range m1 {
		if m2[key] != value {
			return false
		}
	}
	return true
}
