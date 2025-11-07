#include <iostream>
#include <vector>
#include <string>

std::string join(const std::vector<std::string>& arr, const std::string& sep) {
    
    std::string result;

    for (size_t i = 0; i < arr.size(); ++i) {
        result += arr[i];
        if (i + 1 < arr.size()) {
            result += sep;
        }
    }

    return result;
}