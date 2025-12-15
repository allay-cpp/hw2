#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	std::cout << "¬ведите первое число: ";
	int a{};
	std::cin >> a;
	std::cout << "¬ведите второе число: ";
	int b{};
	std::cin >> b;
	std::cout << "¬ведите третье число: ";
	int c{};
	std::cin >> c;
	std::cout << "\n–езультат: ";
	std::cout << (a >= b && a >= c ? a : (b >= a && b >= c ? b : c)) << ' ';
	std::cout << (a <= b && a >= c || a >= b && a <= c ? a : (b <= a && b >= c || b >= a && b <= c ? b : c)) << ' ';
	std::cout << (a <= b && a <= c ? a : (b <= a && b <= c ? b : c)) << std::endl;

	return EXIT_SUCCESS;
}