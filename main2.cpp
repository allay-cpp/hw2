#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "Введите первое число: ";
	int a{};
	std::cin >> a;
	std::cout << "Введите второе число: ";
	int b{};
	std::cin >> b;
	std::cout << "Введите третье число: ";
	int c{};
	std::cin >> c;
	std::cout << "\nРезультат: ";
	std::cout << (a >= b && a >= c ? a : (b >= a && b >= c ? b : c)) << ' ';
	std::cout << (a <= b && a >= c || a >= b && a <= c ? a : (b <= a && b >= c || b >= a && b <= c ? b : c)) << ' ';
	std::cout << (a <= b && a <= c ? a : (b <= a && b <= c ? b : c)) << std::endl;

	return EXIT_SUCCESS;

}

