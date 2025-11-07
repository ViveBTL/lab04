#include <iostream>
#include <vector>

// .first is min
// .second is max
std::pair<float, float> minMax(const std::vector<float>& vec) {
	float max = std::numeric_limits<float>::min();
	float min = std::numeric_limits<float>::max();
	for (float i : vec) {
		if (max < i)
			max = i;
		if (min > i)
			min = i;
	}
	return std::make_pair(min, max);
}