#include <iostream>
#include <vector>

std::string replace(std::string& str, const std::string& old, const std::string& new_string) {
	size_t z = 0;
	while ((z = str.find(old, z)) != std::string::npos) {
		str.replace(z, old.size(), new_string);
		z++;
	}
	return str;
}