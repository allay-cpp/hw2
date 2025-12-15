#include <iostream>
#include <string>
#include <cstdlib>


int main()
{
	std::cout << "Введите пол: ";
	char male{};
	std::cin >> male;
	std::cout << "Введите знак зодиака: ";
	std::string zodiac{};
	std::cin >> zodiac;
	std::cout << "Введите возраст: ";
	int age{};
	std::cin >> age;
	if ((male == 'м') and (zodiac == "рак" || zodiac == "скорпион" || zodiac == "рыбы") and (age < 40))
	{
		std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << '\n';
	}
	else
	{
		if ((male == 'ж') and (zodiac == "телец" || zodiac == "дева" || zodiac == "козерог") and (age >= 15) and (age <= 30))
		{
			std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << '\n';
			std::cout << "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << '\n';
		}
		else
		{
			std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << '\n';
		}
	}

	return EXIT_SUCCESS;
}