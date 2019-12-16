// Creates sequence of numbers
// CreateNumSeq(2, 5) -> [2, 3, 5]
// CreateNumSeq(5, 2) -> [5, 3, 2]
func CreateNumSeq(min, max int) []int {
	sign := int(math.Copysign(1, float64(max-min)))

	seq := make([]int, int(math.Abs(float64(max-min)))+1)

	for i := range seq {
		seq[i] = min + i*sign
	}

	return seq
}