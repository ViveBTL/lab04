#ifndef PRINT_H
#define PRINT_H

#include <string>
#include <iostream>
#include <fstream>

void print(const std::string& text, std::ostream& out = std::cout);
void print(const std::string& text, std::ofstream& out);

#endif 
