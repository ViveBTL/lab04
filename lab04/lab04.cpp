#include <iostream>
#include <vector>
#include "lab4.hpp"
#include <string>

int main() {
	int c = 0;
	std::vector<float> v{ 1, 2, 3, 4, 5, 6, -1, -10, 100 };
	std::vector<float> e{ };

	for (short c : v)
		std::cout << c << " ";
	std::cout << '\n' << '\n';

	std::cout << "task_1: " << mean(v) << '\n' <<'\n';

	std::cout << "task_2: " << "min: " << minMax(v).first << " " << "Max: " << minMax(v).second << '\n'<<'\n';

	std::cout << "task_3: " << Max(v) << " " << Max(e) << '\n'<<'\n';

	sort(v);
	std::cout << "task_4: ";
	for (float y : v)
		std::cout << y << " ";
	std::cout << '\n'<<'\n';

	std::vector<int> r{ 1, 2, 3, 4, 5, 6, -1, -10, 100 };
	std::cout << "task_5: " << std::boolalpha << remove_first_negative_element(r, c) << '\n'<<'\n';

	std::string text, old, new_old;
	std::cout << "task_6: " << '\n' << "enter text: ";
	std::getline(std::cin, text);
	std::cout << "enter old: ";
	std::cin >> old;
	std::cout << "enter new_old: ";
	std::cin >> new_old;
	std::cout << replace(text, old, new_old) << '\n'<<'\n';

	std::cout << "task_7: ";
	std::vector<std::string> arr;
	std::string txt;
	char sep;
	std::cout << "enter sep: ";
	std::cin >> sep;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "enter text: ";
	std::getline(std::cin, txt);

	std::vector<std::string> arr2 = split(txt, sep);
	for (int i = 0; i < arr2.size(); i++)
		std::cout << i << ": " << arr2[i] << " ";
	std::cout << '\n'<<'\n';
	
	arr2 = split("456465 65675   67567567", ' ');
	for (int i = 0; i < arr2.size(); i++)
		std::cout << i << ": " << arr2[i] << " ";
	std::cout << '\n'<<'\n';

	std::cout << "task_8: ";
	std::vector<std::string> vec;
	int amount_of_elements;
	std::cout << "amount_of_elements: ";
	std::cin >> amount_of_elements; std::cout<< '\n';
	for (int i = 0; i < amount_of_elements; i++) {
		std::cout << "El_" << i << ": ";
		std::cin >> vec[i];
	}

}
	