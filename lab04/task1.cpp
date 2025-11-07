#include <vector>


float mean(const std::vector<float>& vec) {
	float sum = 0;
	for (int el : vec) {
		sum += el;
	}
	return sum / vec.size();
}