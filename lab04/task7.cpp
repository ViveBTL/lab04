#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string& text,const char sep) {
    std::vector<std::string> arr;
   

    size_t start = 0;
    size_t end = 0;

    while ((end = text.find(sep, start)) != std::string::npos) {
        if (end != start) {
            arr.push_back(text.substr(start, end - start));
        }
        start = end + 1;
    }

    if (start < text.size()) {
        arr.push_back(text.substr(start));
    }

    return arr;
}