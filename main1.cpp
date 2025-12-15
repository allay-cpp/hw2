#include <iostream>
#include <cstdlib>

int main()
{
	bool t{ true };
	bool f{ false };

	std::cout << "Оператор: ||" << '\n';
	std::cout << (t == true ? "true" : "false") << "\t" << (t == true ? "true" : "false") << "\t" << ((t || t) == true ? "true" : "false") << '\n';
	std::cout << (f == true ? "true" : "false") << "\t" << (t == true ? "true" : "false") << "\t" << ((f || t) == true ? "true" : "false") << '\n';
	std::cout << (t == true ? "true" : "false") << "\t" << (f == true ? "true" : "false") << "\t" << ((t || f) == true ? "true" : "false") << '\n';
	std::cout << (f == true ? "true" : "false") << "\t" << (f == true ? "true" : "false") << "\t" << ((f || f) == true ? "true" : "false") << std::endl;

	std::cout << '\n';
	std::cout << "Оператор: &&" << '\n';
	std::cout << (t == true ? "true" : "false") << "\t" << (t == true ? "true" : "false") << "\t" << ((t && t) == true ? "true" : "false") << '\n';
	std::cout << (f == true ? "true" : "false") << "\t" << (t == true ? "true" : "false") << "\t" << ((f && t) == true ? "true" : "false") << '\n';
	std::cout << (t == true ? "true" : "false") << "\t" << (f == true ? "true" : "false") << "\t" << ((t && f) == true ? "true" : "false") << '\n';
	std::cout << (f == true ? "true" : "false") << "\t" << (f == true ? "true" : "false") << "\t" << ((f && f) == true ? "true" : "false") << std::endl;

	return EXIT_SUCCESS;
}