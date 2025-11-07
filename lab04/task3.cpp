#include <iostream>
#include <vector>

int Max(const std::vector<float>& vec) {
	float max = -1;
	int indmx = -1;
	for (float i = 0; i < vec.size(); i++)
		if (max < vec[i]) {
			max = vec[i];
			indmx = i;
		}
	return indmx;
}