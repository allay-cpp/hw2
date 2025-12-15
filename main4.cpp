#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	std::cout << "Введите целое число: ";
	int a{};
	std::cin >> a;
	std::cout << "Введите целое число: ";
	int b{};
	std::cin >> b;
	std::cout << '\n';

	if (a < -99 || a > 99 || b < -99 || b > 99)
	{
		std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
	}
	else
	{
		int x = a;
		std::string str_x{ "" };
		if (x < 0)
		{
			str_x += "минус ";
		}
		x = (x < 0 ? -1 * x : x);
		if (x > 9 && x < 20)
		{
			switch (x)
			{
			case 10:
				str_x += "десять";
				break;
			case 11:
				str_x += "одиннадцать";
				break;
			case 12:
				str_x += "двенадцать";
				break;
			case 13:
				str_x += "тринадцать";
				break;
			case 14:
				str_x += "четырнадцать";
				break;
			case 15:
				str_x += "пятнадцать";
				break;
			case 16:
				str_x += "шестнадцать";
				break;
			case 17:
				str_x += "семнадцать";
				break;
			case 18:
				str_x += "восемнадцать";
				break;
			case 19:
				str_x += "девятнадцать";
				break;
			}
		}
		if (x > 19)
		{
			switch (x / 10)
			{
			case 2:
				str_x += "двадцать";
				break;
			case 3:
				str_x += "тридцать";
				break;
			case 4:
				str_x += "сорок";
				break;
			case 5:
				str_x += "пятьдесят";
				break;
			case 6:
				str_x += "шестьдесят";
				break;
			case 7:
				str_x += "семьдясат";
				break;
			case 8:
				str_x += "восемьдесят";
				break;
			case 9:
				str_x += "девяносто";
				break;
			}
		}
		if (x < 10 || x > 19 && x % 10 != 0)
		{
			if (x > 19)
			{
				str_x += " ";
			}
			switch (x % 10)
			{
			case 0:
				str_x += "ноль";
				break;
			case 1:
				str_x += "один";
				break;
			case 2:
				str_x += "два";
				break;
			case 3:
				str_x += "три";
				break;
			case 4:
				str_x += "четыре";
				break;
			case 5:
				str_x += "пять";
				break;
			case 6:
				str_x += "шесть";
				break;
			case 7:
				str_x += "семь";
				break;
			case 8:
				str_x += "восемь";
				break;
			case 9:
				str_x += "девять";
				break;
			}
		}
		std::string str_a{ "" };
		str_a = str_x;

		x = b;
		str_x = "";
		if (x < 0)
		{
			str_x += "минус ";
		}
		x = (x < 0 ? -1 * x : x);
		if (x > 9 && x < 20)
		{
			switch (x)
			{
			case 10:
				str_x += "десять";
				break;
			case 11:
				str_x += "одиннадцать";
				break;
			case 12:
				str_x += "двенадцать";
				break;
			case 13:
				str_x += "тринадцать";
				break;
			case 14:
				str_x += "четырнадцать";
				break;
			case 15:
				str_x += "пятнадцать";
				break;
			case 16:
				str_x += "шестнадцать";
				break;
			case 17:
				str_x += "семнадцать";
				break;
			case 18:
				str_x += "восемнадцать";
				break;
			case 19:
				str_x += "девятнадцать";
				break;
			}
		}
		if (x > 19)
		{
			switch (x / 10)
			{
			case 2:
				str_x += "двадцать";
				break;
			case 3:
				str_x += "тридцать";
				break;
			case 4:
				str_x += "сорок";
				break;
			case 5:
				str_x += "пятьдесят";
				break;
			case 6:
				str_x += "шестьдесят";
				break;
			case 7:
				str_x += "семьдясат";
				break;
			case 8:
				str_x += "восемьдесят";
				break;
			case 9:
				str_x += "девяносто";
				break;
			}
		}
		if (x < 10 || x > 19 && x % 10 != 0)
		{
			if (x > 19)
			{
				str_x += " ";
			}
			switch (x % 10)
			{
			case 0:
				str_x += "ноль";
				break;
			case 1:
				str_x += "один";
				break;
			case 2:
				str_x += "два";
				break;
			case 3:
				str_x += "три";
				break;
			case 4:
				str_x += "четыре";
				break;
			case 5:
				str_x += "пять";
				break;
			case 6:
				str_x += "шесть";
				break;
			case 7:
				str_x += "семь";
				break;
			case 8:
				str_x += "восемь";
				break;
			case 9:
				str_x += "девять";
				break;
			}
		}
		std::string str_b{ "" };
		str_b = str_x;

		if (a > b)
		{
			std::cout << str_a << " больше чем " << str_b << std::endl;
		}
		else
		{
			if (a < b)
			{
				std::cout << str_a << " меньше чем " << str_b << std::endl;
			}
			else
			{
				std::cout << str_a << " равно " << str_b << std::endl;
			}
		}
	}

	return EXIT_SUCCESS;
}
